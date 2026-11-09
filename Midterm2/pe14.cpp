#include <iostream>
using namespace std;

int binarySearch(int array[], int size, int value);


int main(){

    const int SIZE = 7;
    int numbers[SIZE] = {2, 3, 5, 11, 17, 23, 29};
    int Searchnumber;

    cout<<"Enter a number to search for: ";
    cin>>Searchnumber;

    if(binarySearch(numbers, SIZE, Searchnumber) == -1){
        cout<<"Number "<<Searchnumber <<" was not found in the array.";

    }
    else{
        cout<<"Number "<<Searchnumber <<" was  found at index "<<binarySearch(numbers, SIZE, Searchnumber);
    }

}

int binarySearch(int array[], int size, int value){
    int start=0;
    int end = size -1;
    int middle;
    int position =-1;   
    bool found = false;

    while(start <= end && !found){
        middle = (start + end)/2;
        if(array[middle] == value){
            found = true;
            position = middle;
        }
        else if (array[middle] > value){
            end = middle-1;
        }
        else{
            start=middle+1;
        }

    }

    return position;
}