// https://leetcode.com/problems/palindrome-number

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        else{
            std::string str = std::to_string(x);

            bool value = true;
            for(int i=0;i<size(str);i++){
                if (str[i] != str[size(str)-i-1]){
                    value = false;
                    break;
                }
            }
            return value;
        }
    }
};