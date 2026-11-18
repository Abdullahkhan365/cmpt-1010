#include <iostream>
using namespace std;

int doubleNumber(int a);


int main(){

    int number;

    cout<<"Enter a number: ";
    cin>>number;

    cout<<"Before function: "<<number<<endl;
    cout<<"After function: "<<doubleNumber(number);

    return 0;
}

int doubleNumber(int a){
    return a*2;
}