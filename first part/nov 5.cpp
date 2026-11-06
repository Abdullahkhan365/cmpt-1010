#include <iostream>
using namespace std;

int linearSearch(const int arr[], int size, int value);

void selectionSort(int arr[], int size);

int binarySearch(const int arr[], int size, int value);

int main(){
    const int SIZE = 10;
    int studentIDs[SIZE] = {1042, 1015, 1098, 1031, 1070, 1004, 1063, 1027, 1085, 1056};
    int Search_student_id;

    cout<<"Original IDs: ";
    for(int i =0; i < SIZE; i++){
        cout<<studentIDs[i]<<" ";

    }


}