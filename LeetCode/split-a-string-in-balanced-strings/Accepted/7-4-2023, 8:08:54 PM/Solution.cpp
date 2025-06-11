// https://leetcode.com/problems/split-a-string-in-balanced-strings

class Solution {
public:
    int balancedStringSplit(string s) {
        
        int count_left = 0;
        int count_right = 0;
        int sub_count = 0;

        string substr = "";

        for(auto i:s){

            if(i=='R'){
                count_right += 1;
            }
            else if(i=='L'){
                count_left += 1;
            }

            if(count_left == count_right){
                if(count_left==0){
                    substr += i;
                }
                else{
                    sub_count += 1;
                    substr = "";
                }
            }
        }
        return sub_count;
    }
};