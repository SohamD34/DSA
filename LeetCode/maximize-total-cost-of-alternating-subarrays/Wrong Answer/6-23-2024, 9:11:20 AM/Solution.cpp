// https://leetcode.com/problems/maximize-total-cost-of-alternating-subarrays

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    long long maximumTotalCost(vector<int>& nums) {
        
        int n = nums.size();
        if(n==1) {
            return nums[0];
        }
        if(n==2){
            return nums[0] + nums[1];
        }

        long long sum = 0;
        long long curr_sum = 0;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i] < 0){
                curr_sum += abs(nums[i]);
                sum += abs(nums[i]);
            }
            else{
                sum += nums[i];
                curr_sum = nums[i];
            }
            // cout<<nums[i]<<" "<<curr_sum<<" "<<sum<<endl;
        }
        return sum;
    }
};