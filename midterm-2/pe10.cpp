#include <iostream>
using namespace std;

int main(){
    const int Number_elements = 5;
    int arrayone[Number_elements];
    int arraytwo[Number_elements];
    bool arrayequal = true;

    cout<<"Enter 5 numbers for the first array:"<<endl;
    for(int i=0; i < Number_elements; i++){
        cin>>arrayone[i];
    }

    cout<<endl;

    cout<<"Enter 5 numbers for the Second array:"<<endl;
    for(int i=0; i < Number_elements; i++){
        cin>>arraytwo[i];
    }

    for(int i=0; i < Number_elements; i++){
        if(arrayone[i] != arraytwo[i] && arrayequal){
            arrayequal = false;
            break;
            
        }
        
    }

    if(arrayequal){
        cout<<"\nThe arrays are equal.";
    }
    else{
        cout<<"\nThe arrays are not equal.";
    }

    return 0;
}