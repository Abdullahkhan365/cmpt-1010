#include <iostream>
using namespace std;

int main(){

    int Distance;
    double Fuel_consumption;
    double Price_per_liter;

    cout<<"Enter the trip distance in km: ";
    cin>>Distance;

    cout<<"Enter  fuel consumption (L/100 km) : ";
    cin>>Fuel_consumption;

    cout<<"Enter fuel price per liter: ";
    cin>>Price_per_liter;

    double Fuel_required = Distance * Fuel_consumption / 100;
    double Fuel_cost = Fuel_required * Price_per_liter;

    cout<<"Fuel Required: "<<Fuel_required<<" liters"<< endl;
    cout<<"Total Fuel Cost: $"<< Fuel_cost<<endl;

    return 0;

}