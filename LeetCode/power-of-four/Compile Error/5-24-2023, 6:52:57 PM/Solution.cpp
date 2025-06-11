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
                return isPowerOfTwo(pow(n,-1));
            }
            else{
                if(n%4==0){
                    return isPowerOfTwo(n/2);
                }
                else{
                    return false;
                }
            }
        }
    }
};