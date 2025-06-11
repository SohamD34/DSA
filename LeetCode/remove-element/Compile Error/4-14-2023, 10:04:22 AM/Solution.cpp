// https://leetcode.com/problems/remove-element

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        vector<int> uniq;
        for(int i=0;i<nums.size();i++){
            if (nums[i]!=val){
                k++;
                uniq.push_back(nums[i]);
            }
        }
        return uniq;
    }
};