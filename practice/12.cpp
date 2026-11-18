#include <iostream>

using namespace std;

int main(){
    string resturant;
    double cost;
    int numPeople;

     
    cout<<"Enter the resturant name: ";
    cin>> resturant;

    cout<<"Enter the meal cost: ";
    cin>>cost;

    cout<<"Enter the number of people: ";
    cin>>numPeople;
    
    double tax = cost * 0.12;
    double tip = cost * 0.18;
    double total = tax + tip + cost;
    double perPerson = total/numPeople;

    cout<<"Resturant: "<< resturant<< endl;
    cout<<"Tax: $"<< tax<< endl;
    cout<<"Tip: $"<< tip<< endl;
    cout<<"Total Bill: $"<< total<<endl;
    cout<<"Each Person Pays: $"<< perPerson<<endl;

    return 0;


}
