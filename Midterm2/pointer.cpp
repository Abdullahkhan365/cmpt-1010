#include <iostream>
using namespace std;

int main(){

    int num = -99;
    int *pNum = &num;

    cout<<num<<endl;
    cout<<&num<<endl;
    cout<< *pNum<<endl;
    cout<< pNum<<endl;

    int x =20;
    int *pX = &x;
    
    cout<<pX<<endl;
    cout<<*pX<<endl;

    *pX = 100;

    cout<<pX<<endl;
    cout<<*pX<<endl;


    return 0;
}