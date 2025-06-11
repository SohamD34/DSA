// https://leetcode.com/problems/palindrome-number

class Solution {
public:
    bool isPalindrome(int x) {
        
        string s = to_string(x);
        string reversed(s.rbegin(), s.rend());

        if(s == reversed){
            return true;
        }
        return false;
    }
};