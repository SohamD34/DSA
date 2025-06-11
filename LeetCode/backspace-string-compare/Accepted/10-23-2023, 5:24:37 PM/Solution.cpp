// https://leetcode.com/problems/backspace-string-compare

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        string s1 = "";
        string t1 = "";

        for(auto i:s){
            if(i != '#'){
                s1 += i;
            }
            else{
                s1 = s1.substr(0, s1.length()-1);
            }
        }

        for(auto i:t){
            if(i != '#'){
                t1 += i;
            }
            else{
                t1 = t1.substr(0, t1.length()-1);
            }
        }

        return (s1==t1);
    }
};