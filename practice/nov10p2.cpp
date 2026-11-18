#include <iostream>
using namespace std;

int main(){

    int vals[]= {4, 7, 11};

    int *valptr = vals;

    cout<<" Address of the array: "<< vals <<endl;

    cout<<" First Element: "<< *vals <<endl;

        cout<<" second Element: "<< valptr[1] <<endl;

        cout<<" third Element: "<< (valptr +2) <<endl;

}
