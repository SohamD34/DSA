// https://leetcode.com/problems/palindrome-number

class Solution {
public:
    int reverse(int x) {
        
        long long int y = 0;

        while(x){
            y = y*10;
            int last_dig = x%10;
            y = y + last_dig;
            x = x/10;

            if(y > pow(2,31)-1  || y < -1*pow(2,31)){
                return 0;
            }
        }
        return y;
    }

    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        if(reverse(x) == x){
            return true;
        }
        return false;
    }
};