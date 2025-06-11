// https://leetcode.com/problems/rotate-array

class Solution {
public:
    vector<int> rotate_arr(vector<int>nums, int n){
        int last = nums[n-1];
        for(int i=n-2; i>=0; i--){
            nums[i+1] = nums[i];
        }
        nums[0] = last;
        return nums;
    }

    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        for(int i=0; i<k%n; i++){
            nums = rotate_arr(nums,n);
        }
    }
};