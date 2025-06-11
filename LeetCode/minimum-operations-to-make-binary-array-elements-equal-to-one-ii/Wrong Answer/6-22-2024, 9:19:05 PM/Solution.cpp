// https://leetcode.com/problems/minimum-operations-to-make-binary-array-elements-equal-to-one-ii

class Solution {
public:
    int minOperations(vector<int>& nums) {
        
        int n = nums.size();
        
        int ones_to_right = 0;
        
        for(int i=1; i<n; i++){
            if(nums[i] == 1){
                ones_to_right += 1;
            }
        }
        
        return ones_to_right + 1;
        
    }
};