// https://leetcode.com/problems/find-pivot-index

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int left = 0;
        int right = 0;
        int ans = -1;

        for(int i=1; i<nums.size(); i++){
            right += nums[i];
        }
        if(right == 0){
            return 0;
        }

        for(int i=1; i<nums.size()-1; i++){

            left += nums[i-1];
            right -= nums[i];

            if(left == right){
                ans = i;
                break;
            }
        }
        return ans;
    }
};