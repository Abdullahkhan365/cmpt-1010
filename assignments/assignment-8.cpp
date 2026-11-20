#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    const int NUM_TEMPERATURES = 5;
    const double MIN_TEMPERATURE = 36.0;
    const double MAX_TEMPERATURE = 42.0;
    double temperatures[NUM_TEMPERATURES];
    double totalTemperature = 0.0;

    for(double &temperature : temperatures)
    {
        cout<<"Enter temperature between "<<MIN_TEMPERATURE
            <<" and "<<MAX_TEMPERATURE<<": ";
        cin>>temperature;

        while(temperature < MIN_TEMPERATURE || temperature > MAX_TEMPERATURE)
        {
            cout<<"Invalid temperature. Enter a value between "
                <<MIN_TEMPERATURE<<" and "<<MAX_TEMPERATURE<<": ";
            cin>>temperature;
        }

        totalTemperature += temperature;
    }

    cout << fixed << setprecision(2);
    cout<<"Average temperature: "
        <<totalTemperature / NUM_TEMPERATURES<<endl;

    return 0;
}
