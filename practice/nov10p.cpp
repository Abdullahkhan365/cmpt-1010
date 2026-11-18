#include <iostream>
using namespace std;

int main(){
    int x =25;
    int y = 10;

    int *intptr = &x;

    cout<<"Value of x: "<< x <<endl;

    cout<<"address of x: "<< &x<<endl;

    cout<< "Value of intptr: " << intptr << endl;

    cout<<"value pointed to by intptr: "<< *intptr<< endl;

    *intptr= 100;

    cout<<"\n After changing *intptr to 100:\n";

    cout<< "The value of x is " << x << endl;
    cout<<" the value pointed to by integre is " <<*intptr<<endl;
    
    intptr = &y;
    cout<< "Value of new intptr: " << intptr << endl;

    return 0;


}
