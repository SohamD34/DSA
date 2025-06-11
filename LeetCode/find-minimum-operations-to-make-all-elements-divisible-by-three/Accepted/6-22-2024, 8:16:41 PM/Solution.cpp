// https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        
        int sum = 0;
        
        for(int i=0; i<nums.size(); i++){
            int rem = nums[i]%3;
            
            if(rem != 0){
                sum += 1;
            }
        }
        return sum;
    }
};