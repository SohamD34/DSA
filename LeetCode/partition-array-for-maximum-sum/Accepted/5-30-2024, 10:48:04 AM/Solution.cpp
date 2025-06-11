// https://leetcode.com/problems/partition-array-for-maximum-sum

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {

        int n = arr.size();
        vector<int> dp(n,0);

        for(int i=0; i<n; i++){
            int max_val = 0;

            for(int j=1; j<=min(i+1, k); j++){

                max_val = max(max_val, arr[i-j+1]);
                dp[i] = max(dp[i], (i>=j ? dp[i-j] : 0) + max_val*j);
            }
        }
        return dp[n-1];
    }
};