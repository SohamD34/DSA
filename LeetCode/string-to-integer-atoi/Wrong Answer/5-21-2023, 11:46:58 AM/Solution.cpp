// https://leetcode.com/problems/string-to-integer-atoi

class Solution {
public:
    int myAtoi(string s) {

        string shortened;
        for(auto i:s){
            if(i!=' ' && !(65<=int(i) && int(i)<=90) && !(97<=int(i) && int(i)<=122)){
                shortened += i;
            }
        }

        cout<<shortened<<endl;
        return stoi(shortened);
        
    }
};