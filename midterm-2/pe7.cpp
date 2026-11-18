#include <iostream>
using namespace std;

int main(){
    const int Number_employee = 6;
    int hours[Number_employee];

    cout<<"Enter the hours worked by "<<Number_employee<<" Employees: ";
    for(int x=0; x <Number_employee; x++){
        cin>>hours[x];
    }

    cout<<"The hours you Entered are: ";
    for(int x=0; x< Number_employee; x++){
        cout<<hours[x]<<" ";
    }


    return 0;
}