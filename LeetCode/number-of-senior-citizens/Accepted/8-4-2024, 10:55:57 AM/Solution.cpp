// https://leetcode.com/problems/number-of-senior-citizens

class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;

        for(auto s:details){
            if(s[11]>'6'){
                count ++;
            }
            else{
                if(s[11]=='6' && s[12]>'0'){
                    count ++;
                }
            }
        }
        return count;
    }
};