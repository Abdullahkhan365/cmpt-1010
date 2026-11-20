#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {


        return 0;
        
    }
};

int main(){


    vector <int> arr = {1,1,4,4,6,6};


    for(int j =0; j<arr.size(); j++)
    {
    for(int i =1; i<arr.size(); i++)
    {
        if(arr[j] == arr[i]){
            cout<<i;
        }

        arr.erase(arr.begin() +i);


        // Erasing the last element makes index i invalid.
        if (i < arr.size()) {
            cout << arr[i];
        }

        

    }
}

    

    return 0;
}
