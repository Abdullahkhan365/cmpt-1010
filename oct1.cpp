#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    const double SWIMMING_PRICE = 12.00;
    const double GYM_PRICE = 15.00;

    string fullName;
    string activity;
    int age;
    double discount;
    double basePrice;
    double finalPrice;
    char visitType;

    cout << "Enter customer's full name: ";
    getline(cin, fullName);

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter visit type (S/G): ";
    cin >> visitType;

    if (age < 0 || age > 100)
    {
        cout << "Invalid age." << endl;
    }
    else if (visitType != 'S' && visitType != 'G')
    {
        cout << "Invalid visit type." << endl;
    }
    else
    {
        if (visitType == 'S')
        {
            activity = "Swimming";
            basePrice = SWIMMING_PRICE;
        }
        else
        {
            activity = "Gym";
            basePrice = GYM_PRICE;
        }

        if (age <= 12)
        {
            discount = 0.50;
        }
        else if (age >= 65)
        {
            discount = 0.30;
        }
        else
        {
            discount = 0.0;
        }

        finalPrice = basePrice * (1 - discount);

        cout << endl;
        cout << "===== Admission =====" << endl;
        cout << "Customer: " << fullName << endl;
        cout << "Activity: " << activity << endl;
        cout << "Final Price: $" << fixed << setprecision(2)
             << finalPrice << endl;
    }

    return 0;
}
