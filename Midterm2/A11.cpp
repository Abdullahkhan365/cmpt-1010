#include <iostream>
#include <iomanip>

using namespace std;

struct Rectangle
{
    double length;
    double width;
    double area;
    double perimeter;
};

Rectangle getRectangle();

int main()
{
    Rectangle r;
    r = getRectangle();

    cout << fixed << setprecision(2);
    cout << "\nRectangle Measurements\n";
    cout << "Length: " << r.length << '\n';
    cout << "Width: " << r.width << '\n';
    cout << "Area: " << r.area << '\n';
    cout << "Perimeter: " << r.perimeter << '\n';

    return 0;
}

Rectangle getRectangle()
{
    Rectangle rect;

    cout << "Enter rectangle length: ";
    cin >> rect.length;

    cout << "Enter rectangle width: ";
    cin >> rect.width;

    rect.area = rect.length * rect.width;
    rect.perimeter = 2 * (rect.length + rect.width);

    return rect;
}