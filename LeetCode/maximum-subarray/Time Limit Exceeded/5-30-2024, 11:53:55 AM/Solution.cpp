// https://leetcode.com/problems/maximum-subarray

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    int maxSubArray(vector<int>& nums) {
        
        int largest_sum = INT_MIN;
        int n = nums.size();
        vector<int> dp(n,0);

        int max_dp = nums[0];

        for(int i=0; i<n; i++){
            dp[i] = nums[i];

            int max_sum = nums[i];
            int current_sum = nums[i];

            for(int j=i-1; j>=0; j--){
                current_sum += nums[j];
                max_sum = max(max_sum, current_sum);
            }

            dp[i] = max(dp[i],max_sum);
            max_dp = max(max_dp, dp[i]);
        }

        return max_dp;
    }
};