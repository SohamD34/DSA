// https://leetcode.com/problems/single-number

class Solution {
public:
    int singleNumber(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        int num;
        for(int i=1;i<nums.size()-1;i++){
            if ((nums[i-1]!=nums[i] && nums[i+1]==nums[i]) or (nums[i-1]==nums[i] && nums[i+1]!=nums[i])){
                num =  nums[i];
            }
        }

        return num;
    }
};