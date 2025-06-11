// https://leetcode.com/problems/maximum-product-subarray

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int max_ending_here = 1;
        int max_so_far = INT_MIN;

        for(int i=0; i<nums.size(); i++){

            max_ending_here *= nums[i];
            max_so_far = max(max_so_far, max_ending_here);

            // if(max_ending_here < 0){
            //     max_ending_here = 1;
            // }
        } 

        return max_so_far;
    }
};