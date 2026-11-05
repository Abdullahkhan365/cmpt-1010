#include <iostream>
using namespace std;

int add(int a, int b);
int add(int a, int b, int c);

int main(){
    int First_number;
    int Second_number;
    int Third_number;

    cout<<"Enter First number: ";
    cin>>First_number;

    cout<<"Enter Second number: ";
    cin>>Second_number;

    cout<<"Enter Third number: ";
    cin>>Third_number;

    cout<<"Sum of Two number is: "<<add(First_number, Second_number)<<endl;
    cout<<"Sum of Three number is: "<<add(First_number, Second_number, Third_number)<<endl;
}

int add(int a, int b){
    return a+b;
}

int add(int a, int b, int c){
    return a+b+c;
}