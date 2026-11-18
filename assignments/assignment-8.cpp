#include <iostream>
using namespace std;

int main(){

    const int num_temperatures = 5;
    double temperature[num_temperatures];
    double total_temperature = 0;

    for(double &temp : temperature){
        cout<< "Enter Temperature: ";
        cin>> temp;

        while(temp < 36 && temp > 42){
         cout<< "Enter Temperature: ";
        cin>> temp;

        }

    }

}
