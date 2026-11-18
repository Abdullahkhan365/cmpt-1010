#include <iostream>
#include <string>
#include <iomanip>
#include <random>
using namespace std;

int main (){
    string Full_name;
    const int Min_value = 1;
    const int Max_value = 6;

    cout<<"Enter you are full name: ";
    getline(cin, Full_name);

    random_device engine;
    uniform_int_distribution <int> dice(Min_value, Max_value);

    int dice_one = dice(engine);
    int dice_two = dice(engine);

    int sum_dice = dice_one + dice_two;

    cout<<fixed<<setprecision(2);

     double avg_dice = sum_dice/2.0;

    cout<<"Player name: "<<Full_name<<endl;
    cout<<"The 1st dice rolled is: "<<dice_one <<endl;
    cout<<"The 2nd dice rolled is: "<<dice_two<<endl;
    cout<<"The sum of two dice is: "<<sum_dice<<endl;
    cout<<"The average of two dice is: "<<avg_dice<<endl;


    return 0;
}