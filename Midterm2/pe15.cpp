#include <iostream>
using namespace std;

int linearSearch(const int arr[], int size, int value);
void selectionSort(int arr[], int size);

int main (){
    const int SIZE = 10;
    int studentIDs[SIZE] = {1042, 1015, 1098, 1031, 1070, 1004, 1063, 1027, 1085, 1056};

    int numSearch;
    
    cout<<"Enter student ID: ";
    cin>>numSearch;

    int position = linearSearch(studentIDs, SIZE, numSearch);

    if(position == -1){
        cout<<"ID not found.";
    }
    else{
        cout<<"ID found at index: "<<position;
    }

} 

int linearSearch(const int arr[], int size, int value){
    int index =0;
    int position =-1;
    bool found = false;

    while(index < size && !found){
        if(arr[index] == value){
            found = true;
            position = index;
        }
        index++;
    }

    return position;
}

void selectionSort(int arr[], int size){
    int minIndex, minValue;

    for(int start =0; start < (size -1); start++){
        minIndex = start;
        minValue = arr[minIndex];
        
        for(int index = start+1; );
    }
}


void swap(int a, int b){
    int temp =a;
    a=b;
    b=temp;
}

