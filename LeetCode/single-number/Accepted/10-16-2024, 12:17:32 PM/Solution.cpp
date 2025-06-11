// https://leetcode.com/problems/single-number

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int xor_v = 0;
        for(auto i:nums){
            xor_v ^= i;
        }
        return xor_v;
    }
};