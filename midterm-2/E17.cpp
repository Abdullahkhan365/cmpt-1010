#include <iostream>
#include <iomanip>
using namespace std;

struct Rectangle {
    double length;
    double width;
    double area;
    double perimeter;
};

void getRectangle(Rectangle *r);

int main() {
    Rectangle rect;
    getRectangle(&rect);

    cout << fixed << setprecision(2);
    cout << "\nRectangle Measurements:\n";
    cout << "Length: " << rect.length << '\n';
    cout << "Width: " << rect.width << '\n';
    cout << "Area: " << rect.area << '\n';
    cout << "Perimeter: " << rect.perimeter << '\n';

    return 0;
}

void getRectangle(Rectangle *r) {
    cout << "Enter rectangle length: ";
    cin >> r->length;

    cout << "Enter rectangle width: ";
    cin >> r->width;

    r->area = r->length * r->width;
    r->perimeter = 2 * (r->length + r->width);
}