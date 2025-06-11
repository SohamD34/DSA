// https://leetcode.com/problems/maximum-subarray

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    int maxSubArray(vector<int>& nums) {
        
        int max_ending_here = 0;
        int max_so_far = INT_MIN;

        for(int i=0; i<nums.size(); i++){

            max_ending_here += nums[i];
            max_so_far = max(max_so_far, max_ending_here);

            if(max_ending_here < 0){
                max_ending_here = 0;
            }
        } 

        return max_so_far;
    }
};