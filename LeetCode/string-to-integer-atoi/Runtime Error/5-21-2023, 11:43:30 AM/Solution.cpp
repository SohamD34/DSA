// https://leetcode.com/problems/string-to-integer-atoi

class Solution {
public:
    int myAtoi(string s) {

        string shortened;
        for(auto i:s){
            if(i!=' '){
                shortened += i;
            }
        }

        cout<<shortened<<endl;
        return stoi(shortened);
        
    }
};