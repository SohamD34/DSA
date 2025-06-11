// https://leetcode.com/problems/maximize-total-cost-of-alternating-subarrays

class Solution {
public:
    long long maximumTotalCost(vector<int>& nums) {
        
        long long total_cost = 0;
        int split_index = 0;
        
        for(int i=0; i<nums.size(); i++){
            
            if(nums[i]<0 && split_index%2==0){
                split_index = 0;
            }
            else if(nums[i]>0 && split_index%2!=0){
                split_index = 0;
            }

            // cout<<nums[i]<<" "<<split_index<<endl;
            total_cost += nums[i]*pow(-1, split_index);
            split_index ++;
        }
        // cout<<endl;
        return total_cost;
    }
};