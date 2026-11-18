#include <iostream>
using namespace std;

int main(){
    const int SIZE = 5;
    int numbers[SIZE] = {10,20,30,40,50};

    int *ptr= numbers;

    cout<<"USing array indexing 1: \n";

    for (int i =0; i < SIZE; i++){
        cout<< numbers[i] <<" ";

    }

    cout<<"\nUsing array indexing 2: \n";

    for (int i =0; i < SIZE; i++){
        cout<< ptr[i] <<" ";

    }

    cout<<"\nUsing array indexing 3: \n";

    for (int i =0; i < SIZE; i++){
        cout<< *(numbers + i) <<" ";

    }

    cout<<"\nUsing array indexing 4: \n";

    for (int i =0; i < SIZE; i++){
        cout<< *(ptr + i) <<" ";

    }


    return 0;
}