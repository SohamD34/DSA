// https://leetcode.com/problems/minimum-size-subarray-sum

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    
        int n = nums.size();
        int sum = 0;
        int mn = n+1;

        int i = 0;
        int j = 0;

        while(j < n){

            sum += nums[j];

            while(sum >= target){
                sum -= nums[i];
                int len = j-i+1;
                mn = min(len, mn);
                i++;
            }
            j++;
        }
        if(mn == n+1){
            return 0;
        }
        return mn;
    }
};