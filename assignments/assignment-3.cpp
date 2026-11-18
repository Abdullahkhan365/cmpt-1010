#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    const double REGULAR_PRICE = 15.00;
    const double PREMIUM_PRICE = 20.00;
    const double WEEKEND_CHARGE = 3.00;

    string fullName;
    string day;
    string movieName;
    char movieType;
    int age;
    double basePrice;
    double discountRate;
    double discountAmount;
    double weekendCharge;
    double finalPrice;

    cout << "Enter customer's full name: ";
    getline(cin, fullName);

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter movie type (R/P): ";
    cin >> movieType;

    cout << "Enter day (Weekday/Weekend): ";
    cin >> day;

    if (age < 0 || age > 120)
    {
        cout << "Invalid age." << endl;
    }
    else if (movieType != 'R' && movieType != 'P')
    {
        cout << "Invalid movie type." << endl;
    }
    else if (day != "Weekday" && day != "Weekend")
    {
        cout << "Invalid day." << endl;
    }
    else
    {
        // Set the movie name and base price.
        if (movieType == 'R')
        {
            movieName = "Regular";
            basePrice = REGULAR_PRICE;
        }
        else
        {
            movieName = "Premium";
            basePrice = PREMIUM_PRICE;
        }

        // Choose the discount rate based on the customer's age.
        if (age <= 12)
        {
            discountRate = 0.50;
        }
        else if (age <= 17)
        {
            discountRate = 0.25;
        }
        else if (age <= 64)
        {
            discountRate = 0.0;
        }
        else
        {
            discountRate = 0.30;
        }

        discountAmount = basePrice * discountRate;

        // Add a charge only for weekend tickets.
        if (day == "Weekend")
        {
            weekendCharge = WEEKEND_CHARGE;
        }
        else
        {
            weekendCharge = 0.0;
        }

        finalPrice = basePrice - discountAmount + weekendCharge;

        cout << endl;
        cout << "===== Movie Ticket =====" << endl;
        cout << "Customer: " << fullName << endl;
        cout << "Age: " << age << endl;
        cout << "Movie Type: " << movieName << endl;
        cout << "Day: " << day << endl;

        cout << fixed << setprecision(2);
        cout << "Base Price: $" << basePrice << endl;
        cout << "Discount: $" << discountAmount << endl;
        cout << "Weekend Charge: $" << weekendCharge << endl;
        cout << "Final Price: $" << finalPrice << endl;
    }

    return 0;
}
