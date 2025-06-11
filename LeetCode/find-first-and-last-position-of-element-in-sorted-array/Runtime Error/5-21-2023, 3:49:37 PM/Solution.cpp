// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = -1;
        int end = -1;

        for(int i=0; i<nums.size(); i++){
            if(nums.size() > 1){
                if(nums[i]==target && start==-1){
                    start = i;
                }
                if(nums[i]==target && nums[i+1]!=target){
                    end = i;
                }
            }
            else{
                if(nums[i]==target){
                    start = 0;
                    end = 0;
                    break;
                }
            }
        }

        vector<int> ans;
        ans.push_back(start);
        ans.push_back(end);
        return ans;
    }
};