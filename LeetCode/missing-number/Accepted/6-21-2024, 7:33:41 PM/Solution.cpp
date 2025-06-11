// https://leetcode.com/problems/missing-number

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();

        int sum = 0;
        for(int i=0; i<n; i++){
            sum += nums[i];
        }

        return n*(n+1)/2 - sum;
    }
};