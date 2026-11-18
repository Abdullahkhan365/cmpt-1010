#include <iostream>
using namespace std;

int main(){
    const int Number =5;
    double value[Number];
    double Max_value = value[0];
    double Min_value = value[0];
    int count =1;

    for(double &num: value){
        cout<<"Enter number "<<count<<" : ";
        cin>>num;

        count++;
    }

    for(double num: value){
        if(num < Min_value){
            Min_value = num;
        }

        if(num > Max_value){
            Max_value = num;
        }
    }

    cout<<"Minimum value: "<<Min_value<<endl;
    cout<<"Maximum value: "<<Max_value<<endl;
    return 0;
}