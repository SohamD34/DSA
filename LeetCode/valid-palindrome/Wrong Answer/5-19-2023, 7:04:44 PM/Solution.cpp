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
            else if(s[i]=='0' or s[i]=='1' or s[i]=='2' or s[i]=='3' or s[i]=='4' or s[i]=='5' or s[i]=='6' or s[i]=='7' or s[i]=='8' or s[i]=='9'){
                ans+=s[i];
            }
        }
        
        string orig = ans;
        reverse(ans.begin(),ans.end());

        cout<<orig;

        if(orig == ans){
            return true;
        }
        return false;
    }
};