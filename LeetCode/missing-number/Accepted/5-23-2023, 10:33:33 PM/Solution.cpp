// https://leetcode.com/problems/missing-number

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int xor_val_1 = 0;
        int xor_val_2 = 0;

        for(int i=0; i<=nums.size(); i++){
            xor_val_1 = xor_val_1^i;
        }

        for(auto i:nums){
            xor_val_2 = xor_val_2^i;
        }
        return xor_val_1^xor_val_2;
    }
};