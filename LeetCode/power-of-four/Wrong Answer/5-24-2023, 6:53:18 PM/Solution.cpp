// https://leetcode.com/problems/power-of-four

class Solution {
public:
    bool isPowerOfFour(int n) {
        
        if(n<=0){
            return false;
        }
        else if(n==1){
            return true;
        }
        else{
            if(0<n && n<1){
                return isPowerOfFour(pow(n,-1));
            }
            else{
                if(n%4==0){
                    return isPowerOfFour(n/2);
                }
                else{
                    return false;
                }
            }
        }
    }
};