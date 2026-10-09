#include <iostream>
using namespace std;

int main (){
    int dist;
    double Fconsm;
    double  FpricL;

    cout<<"Enter the trip distance in km: ";
    cin>>dist;

    cout<<"Enter fuel consumtion (L/100 km): ";
    cin>>Fconsm;

    cout<<"Enter fuel price per liter: ";
    cin>>FpricL;

    double Freq = dist * Fconsm / 100;
    double Fcost = Freq * FpricL;

    cout<<"Fuel Required: "<< Freq <<" liters"<<endl;
    cout<<"Total Fuel Cost: $"<< Fcost<<endl;;

}
