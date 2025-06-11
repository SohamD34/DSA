// https://leetcode.com/problems/factorial-trailing-zeroes

class Solution {
public:
    int trailingZeroes(int n) {

        int sum = 0;
        for(int i=0; i<5; i++){
            sum += n/5;
            n/=5;
        }
        return sum;
    }
};