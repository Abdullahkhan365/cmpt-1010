#include <iostream>
using namespace std;


void displayNumbers(const int numbers[], int count);
int findMinimum(const int numbers[], int count);
int findMaximum(const int numbers[], int count);

int main(){

    const int MAX_SIZE = 20;
    int array[MAX_SIZE];
    int x;

    cout<<"How many numbers you want to enter (1-20): ";
    cin>>x;

    while (x > 20 || x < 1){
    cout<<"Invalid numbers!"<<endl;
    cout<<"pls re-enter, How many numbers you want to enter (1-20): ";
    cin>>x;

    }

    for (int i =0; i < x; i++){
        cout<<"Enter number "<<i+1<<": ";
        cin>>array[i];

    }


displayNumbers(array, x);
cout << "Minimum: " << findMinimum(array, x) << endl;
cout << "Maximum: " << findMaximum(array, x) << endl;

    return 0;
}


void displayNumbers(const int numbers[], int count)
{
    cout<<"Numbers entered: ";

    for (int i =0; i < count; i++)
    {
        cout<<numbers[i]<<" ";

    }

    cout<<"\nNumbers entered: "<<count<<endl;

}

int findMinimum(const int numbers[], int count)
{
    int MIN_NUMBER = numbers[0];

    for (int i =0; i < count; i++){

        if (numbers[i] < MIN_NUMBER)
        {
            MIN_NUMBER = numbers[i];
        }

    }

    return MIN_NUMBER;

}

int findMaximum(const int numbers[], int count)
{
        int MAX_NUMBER = numbers[0];

    for (int i =0; i < count; i++){

        if (numbers[i] > MAX_NUMBER)
        {
            MAX_NUMBER = numbers[i];
        }

    }

    return MAX_NUMBER;
}