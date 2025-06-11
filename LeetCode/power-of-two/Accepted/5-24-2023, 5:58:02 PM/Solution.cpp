// https://leetcode.com/problems/power-of-two

class Solution {
public:
    bool isPowerOfTwo(int n) {
        
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
                if(n%2==0){
                    return isPowerOfTwo(n/2);
                }
                else{
                    return false;
                }
            }
        }

    }
};