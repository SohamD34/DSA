// https://leetcode.com/problems/remove-duplicates-from-sorted-array

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> output;
        int prev = 0;
        for(int i=0;i<nums.size();i++){
            if (nums[i] > prev){
                output.push_back(nums[i]);
                prev = nums[i];
            }
        }
        return output;
    }
};