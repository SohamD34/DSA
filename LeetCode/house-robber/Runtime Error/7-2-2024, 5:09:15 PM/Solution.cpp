// https://leetcode.com/problems/house-robber

class Solution {
public:
    int rob(vector<int>& nums) {

        int n = nums.size();
        int max_sum_till_now = nums[0];

        for(int i=1; i<n; i++){

            if(i==1){
                max_sum_till_now = max(max_sum_till_now, nums[i]);
            }
            else{
                max_sum_till_now = max(max_sum_till_now, nums[i] + nums[i-2]);
                nums[i] = max_sum_till_now;
            }
        }
        return max(nums[n-1], nums[n-2]);
    }
};