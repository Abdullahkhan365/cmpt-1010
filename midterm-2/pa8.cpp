#include <iostream>
using namespace std;

int main(){
    const int size = 5;
    double temperature[size];

    double total_temperature =0;
    double avg_temperature;


    for(double &temp: temperature){
        cout<<"Enter temperature: ";
        cin>>temp;

      
        while ( temp > 42|| temp < 36){
            cout<<"Wrong number entered!"<<endl;
            cout<<"Enter temperature: ";
            cin>>temp;
        }

    }

    cout<<"\nTemperatures entered:\n";

    for(double temp: temperature){
        cout<<temp<<endl;
        total_temperature +=temp;
    }


    avg_temperature = total_temperature/size;
    cout<<"Average temperature: "<<avg_temperature<<endl;



    return 0;
}