// https://leetcode.com/problems/build-array-from-permutation

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;

        for(int i=0;i<size(nums);i++){
            int value = nums[nums[i]];
            ans.push_back(value);
        }
        
        return ans;
    }
};