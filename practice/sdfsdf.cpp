#include <iostream>
using namespace std;

int main()
{
    int number = 0;

    while (number < 5)
    {
        cout << "Hello\n";
        number++;
    }

    cout << "That's all!\n";

    int x, y;

    for (x=1, y=1; x<= 5; x++, y++){
        cout<<x<<"+"<<y<<"equal"<<(x+y)<<endl;
    }

    return 0;


}
