// https://leetcode.com/problems/number-of-1-bits

class Solution {
public:
    int hammingWeight(int n) {
        
        int count = 0;
        for(int i=0; i<32; i++){
            count += ((n & (1<<i)) != 0);
        }
        return count;
    }
};