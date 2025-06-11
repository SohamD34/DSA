// https://leetcode.com/problems/power-of-two

class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if(n==1){
            return true;
        }
        if(abs(n)>=1){
            if(n%2 == 0){
                return true;
            }
        }
        else if(0<abs(n) && abs(n)<1){
            if((1/abs(n))%2 == 0){
                return true;
            }
        }
        return false;

    }
};