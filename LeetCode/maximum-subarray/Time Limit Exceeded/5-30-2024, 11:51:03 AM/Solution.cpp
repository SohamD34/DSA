// https://leetcode.com/problems/maximum-subarray

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int largest_sum = INT_MIN;
        int n = nums.size();
        vector<int> dp(n,0);

        for(int i=0; i<n; i++){
            dp[i] = nums[i];

            int max_sum = nums[i];
            int current_sum = nums[i];

            for(int j=i-1; j>=0; j--){
                current_sum += nums[j];
                max_sum = max(max_sum, current_sum);
            }

            dp[i] = max(dp[i],max_sum);
        }

        int max_dp = dp[0];
        for(int i=0; i<n; i++){
            max_dp = max(max_dp, dp[i]);
        }
        return max_dp;
    }
};