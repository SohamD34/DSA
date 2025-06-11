// https://leetcode.com/problems/valid-palindrome

class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";

        for(int i=0; i<s.length(); i++){

            if(65<=(int)(s[i]) && (int)(s[i])<=91){
                int ascii = (int)(s[i]) + 32;
                char letter = char(ascii);
                ans+=letter;
            }
            else if(97<=(int)(s[i]) && (int)(s[i])<=122){
                ans+=s[i];
            }
        }
        
        string orig = ans;
        reverse(ans.begin(),ans.end());

        if(orig == ans){
            return true;
        }
        return false;
    }
};