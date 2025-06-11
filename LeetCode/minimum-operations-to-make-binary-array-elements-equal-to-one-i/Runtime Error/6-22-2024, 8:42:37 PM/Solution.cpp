// https://leetcode.com/problems/minimum-operations-to-make-binary-array-elements-equal-to-one-i

class Solution {
public:
    int minOperations(vector<int>& nums) {
        
        int count_one = 0;
        int count_zero = 0;
        int n = nums.size();
        
        int changes = 0;
        int i;
        
        for(i=0; i<n-2; i++){
            
            // for(auto i:nums){
            //     cout<<nums[i]<<" ";
            // }
            // cout<<endl;
            
            if(nums[i]==0){
                changes += 1;
                nums[i] = 1;
                nums[i+1] = nums[i+1]^1;
                nums[i+2] = nums[i+2]^1;
            }
        }
        
        if(nums[i+1]==0 || nums[i+2]==0){
            return -1;
        }
        return changes;
    }
};