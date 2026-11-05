#include <iostream>
#include <string>
using namespace std;

int main(){

    string resturant_name;
    double meal_cost;
    double tax_rate = 0.12;
    double tip_rate= 0.18;
    double total_bill;
    int num_people;

    cout<<"Enter the restaurant name: ";
    cin>>resturant_name;

    cout<<"Enter the meal cost: ";
    cin>>meal_cost;

    cout<<"Enter the number of people: ";
    cin>>num_people;

    double total_tax = meal_cost * tax_rate;
    double total_tip = meal_cost * tip_rate;
    total_bill = meal_cost + total_tax + total_tip;
    double pay_per_person = total_bill / num_people;

    cout<<"Resturant: "<< resturant_name<<endl;
    cout<<"Tax: $"<< total_tax<<endl;
    cout<<"Tip: $"<<total_tip<<endl;
    cout<<"Total bill: $"<<total_bill<<endl;
    cout<<"Each person pays: $"<<pay_per_person<<endl;

    return 0;
}
