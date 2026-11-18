#include <iostream>
using namespace std;

int main(){
    const int SIZE = 8;
    int set[SIZE] = {2,4,6,8,10,12,14,16};

    int *numPTR = set;

    cout<<"\nThe number is set: \n";

    for (int count =0; count< SIZE; count++){
        cout<< *numPTR <<" ";
        numPTR++;

    }

    cout<<"\nThe number is set backward: \n";

    for (int count =0; count< SIZE; count++){
        numPTR--;
        cout<< *numPTR <<" ";
    }




    return 0;
}
