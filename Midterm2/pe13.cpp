#include <iostream>
using namespace std;

int linearSearch(const int arr[], int size, int value);

int main(){
    const int SIZE = 10;
    int numbers[SIZE] = {17, 23, 5, 11, 2, 29, 3, 45, 12, 8};
    int Searchnumber;

    cout<<"Enter a number to search for: ";
    cin>>Searchnumber;

    if(linearSearch(numbers, SIZE, Searchnumber ) == -1){
        cout<<"Number "<<Searchnumber<<" was not found in the array.";
    }
    else{
        cout<<"Number "<<Searchnumber<<" was  found at index "<<linearSearch(numbers, SIZE, Searchnumber ) ;
    }

    return 0;
}

int linearSearch(const int arr[], int size, int value){
    bool found= false;
    int position = -1;
    int index =0;

    while (index < size && !found){
        if(arr[index] == value){
            found =true;
            position = index;

        }
        index++;

    }

    return position;

}