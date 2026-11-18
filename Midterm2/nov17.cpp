#include <iostream>
using namespace std;

struct DriverInfo
{
    int deliveries;
    double payPerDelivery;
    double earnings;
};


int main(){

    const int NUM_DRIVERS  = 4;
    DriverInfo drivers [NUM_DRIVERS];

    double total_earnings;

    for(int i =0; i < NUM_DRIVERS; i++){
        cout<<"Driver "<< (i+1) <<" - Number of deliveries: ";
        cin>>drivers[i].deliveries;

        cout<<"Driver "<< (i+1) <<" - Pay per delivery: ";
        cin>>drivers[i].payPerDelivery;

        drivers[i].earnings = drivers[i].deliveries * drivers[i].payPerDelivery;
    }

    cout<<endl;

    for(int i =0; i < NUM_DRIVERS; i++){
        cout<<"Driver "<< (i+1) <<" earnings: $"<< drivers[i].earnings<<endl;
        total_earnings += drivers[i].earnings;

        
    }

    cout<<"Total earnings: $"<<total_earnings;


}