#include <iostream>
using namespace std;

int main(){
    const int Number_temps = 5;
    double temperature[Number_temps];
    double Sum_temperature =0;

    for(double &temp: temperature){
        cout<<"Enter a temperature: ";
        cin>>temp;
        Sum_temperature += temp;
    }

    double avg_temperature = Sum_temperature/Number_temps;

    cout<<"Temperatures entered: "<<endl;
    for(double temp: temperature){
        cout<<temp<<endl;
    }

    cout<<"Average temperature: "<<avg_temperature;

    return 0;
}