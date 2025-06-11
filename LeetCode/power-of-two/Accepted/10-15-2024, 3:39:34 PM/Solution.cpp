// https://leetcode.com/problems/power-of-two

class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        // count number of 1s in binary of the number
        // if count of 1s = 1 ---> yes
        // else ----> no

        // n = 10000
        // if we do (n-1) ---> 01111
        // now n&(n-1) == 0 for powers of 2... rest it will not

        return (n>0 && (n&(n-1)) == 0)?true:false;
    }
};