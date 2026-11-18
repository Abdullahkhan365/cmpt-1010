#include <iostream>
using namespace std;

int linearSearch(const int arr[], int size, int value);
void selectionSort(int arr[], int size);
void displayArray(const int arr[], int size);
int binarySearch(const int arr[], int size, int value);
void swap(int& a, int& b);


int main (){
    const int SIZE = 10;
    int studentIDs[SIZE] = {1042, 1015, 1098, 1031, 1070, 1004, 1063, 1027, 1085, 1056};

    cout<<"Original IDs: ";
    displayArray(studentIDs, SIZE);


    int numSearch;
    
    cout<<"\nEnter student ID: ";
    cin>>numSearch;

    int position = linearSearch(studentIDs, SIZE, numSearch);

    if(position == -1){
        cout<<"ID not found.";
    }
    else{
        cout<<"ID found at index: "<<position;
    }

    selectionSort(studentIDs, SIZE);
    
    cout<<"\nSorted IDs:";
    displayArray(studentIDs, SIZE);

    cout<<"\nBinary search: ";
    int positions = binarySearch(studentIDs, SIZE, numSearch);

    if (positions == -1){
        cout<<"ID not found.";
    }
    else{
        cout<<"ID found at index "<<positions;
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
        
        for(int index = start+1; index< size; index++){
            if(arr[index] < minValue){
                minValue = arr[index];
                minIndex = index;
            }
        }

        swap(arr[minIndex], arr[start]);
    }
}


void swap(int& a, int& b){
    int temp =a;
    a=b;
    b=temp;
}

void displayArray(const int arr[], int size){
    for(int i=0; i < size; i++){
        cout<< arr[i]<<" ";
    }
}

int binarySearch(const int arr[], int size, int value){
    int start=0;
    int middle;
    int end = size - 1;
    int position =-1;
    bool found = false;

    while(start <= end && !found){
        middle = (start+end)/2;
        if(arr[middle] == value)
        {
            position = middle;
            found = true;
        }
        else if(arr[middle] < value){
            start = middle+1;
        }
        else{
            end=middle-1;
        }
    }

    return position;

}



