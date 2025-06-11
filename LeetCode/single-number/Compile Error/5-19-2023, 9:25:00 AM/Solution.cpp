// https://leetcode.com/problems/single-number


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int xor = 0;
        for (int i=0; i<nums.size(); i++){
            xor = xor^nums[i];
        }
        return xor;
    }
};