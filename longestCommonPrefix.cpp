//PJ - HFH 2/21/22

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        for (int i = 0; i < strs[0].size(); i++){
            cout << strs[0][i] <<endl;
            //for each character in the first string, check if the corresponding char in other strings match
            for(int j = 1; j < strs.size(); j++){
                if(strs[0][i] != strs[j][i])
                    return prefix;
            }
            prefix += strs[0][i];
        }
        return prefix;
        
    }
};

//Runtime: O(n^2) ? because iterating through entire list and each character in each list
//dont know how to make faster because have to check each character... can't make any assumptions about 
//string given the last character 

