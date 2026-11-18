#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        if(strs.empty()) return "";

        string common = "";

        for(int j =0; j < strs[0].length(); j++){
        for(int i =1;i < strs.size(); i++){
            if( j >= strs[i].length() || strs[i][j] != strs [0][j])
            {
                return common;
            }
            
        }

        common += strs[0][j];

        
    }
}
    
};

int main(){



    vector<string> strs = {"flower", "flow", "flight"};

    vector<string> mtrs = {"flower", "flow", "flowly"};


     Solution solution;

    cout << solution.longestCommonPrefix(strs) << endl;
    cout << solution.longestCommonPrefix(mtrs) << endl;


    return 0;
}