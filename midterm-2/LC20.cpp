#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main(){

    string s = {"([{}])[{}]{"};

    bool isValid = false;

    char so = '(';
    char sc = ')';
    char mo = '[';
    char mc = ']';
    char lo = '{';
    char lc = '}';

    for(int i = 0; i < s.length(); i++){
        for(int j =1;  j <s.length(); j++){
            if (s[i] == so && s[j] == sc || s[i] == mo && s[j] == mc || s[i] == lo && s[j] == lc ){
                i =j+1;

            }
        }
        isValid = true;
        

    }

    if(isValid){
        cout<<"Output: true";
    }
    else{

        cout<<"Output: false";
    }


    return 0;
}