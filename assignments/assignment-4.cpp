#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{

    string name;
    int salesDays;
    double amount;
    double sum = 0.0;
    double averageSales = 0.0;
    double highestSales = 0.0;
    double lowestSales = 0.0;

    cout<<"Enter your name: ";
    cin>>name;

    cout<<"How many days of sales? ";
    cin>>salesDays;

    while(salesDays < 0)
    {
        cout<<"How many days of sales? ";
        cin>>salesDays;
    }

    for(int day = 1; day <= salesDays; day++)
    {
        cout<<"Enter sales for day "<<day<<": ";
        cin>>amount;

        while(amount < 0)
        {
            cout<<"Enter sales for day "<<day<<": ";
            cin>>amount;
        }

        sum += amount;

        if(day == 1 || amount > highestSales)
        {
            highestSales = amount;
        }

        if(day == 1 || amount < lowestSales)
        {
            lowestSales = amount;
        }
    }

    if(salesDays > 0)
    {
        averageSales = sum / salesDays;
    }

    cout << fixed << setprecision(2);
    cout<<"===== Sales Report ====="<<endl;
    cout<<"Employee: "<<name<<endl;
    cout<<"Number of days: "<<salesDays<<endl;
    cout<<"Total sales: $"<<sum<<endl;
    cout<<"Average daily sales: $"<<averageSales<<endl;
    cout<<"Highest daily sales: $"<<highestSales<<endl;
    cout<<"Lowest daily sales: $"<<lowestSales<<endl;

    return 0;
}
