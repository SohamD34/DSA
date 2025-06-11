// https://leetcode.com/problems/single-number


class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    int singleNumber(vector<int>& nums) {
        
        int xor_val = 0;

        for (int i=0; i<nums.size(); i++){
            xor_val = xor_val^nums[i];
        }
        return xor_val;
    }
};