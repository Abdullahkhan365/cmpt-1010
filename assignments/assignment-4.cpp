#include <iostream>
#include <string>
using namespace std;

int main(){

    string name;
    int SalesDay;
    double amount;
    double Sum;
    double AvgSales;
    double HighSales =0;
    double LowSales;

    cout<<"Enter your name: ";
    cin>>name;

    cout<<"How many days of sales?";
    cin>>SalesDay;

    while(SalesDay < 0){
            cout<<"How many days of sales?";
            cin>>SalesDay;
    }
    
    for(int day = 1; day <= SalesDay; day++)
    {
        cout<<"Enter sales for day "<<day<<":";
        cin>>amount;
        
        while(amount < 0){
        cout<<"Enter sales for day "<<day<<":";
        cin>>amount;
        }

        Sum = Sum + amount;

        if (amount > HighSales){
            HighSales == amount;
        }

    }

    AvgSales = Sum / SalesDay;


    cout<<"===== Sales Report ====";
    cout<<"Employee: "<<name<<endl;
    cout<<"Number of days: "<<SalesDay<<endl;
    cout<<"Total  sales: $"<<Sum<<endl;
    cout<<"Average daily sales: $"<<AvgSales<<endl;
    cout<<"Highest daily sales: $"<<HighSales<<endl;
    cout<<"Lowest daily sales: $"<<endl;


}
