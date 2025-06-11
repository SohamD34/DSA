// https://leetcode.com/problems/rotate-array

class Solution {
public:
    // vector<int> rotate_arr(vector<int>nums, int n, int net_shift){
        
    //     vector<int> shifted;
    //     for(int i=n-1; i>n-1-net_shift; i--){
    //         shifted.push_back(nums[i]);
    //     }

    //     for(int i=n-net_shift-1; i>=0; i--){
    //         nums[i+net_shift] = nums[i];
    //     }

    //     for(int i=0; i<n-net_shift-1; i++){
    //         nums[i] = shifted[net_shift-i-1];
    //     }

    //     return nums;
    // }

    void rotate(vector<int>& nums, int k) {
        reverse(nums.begin()+(nums.size()-k),nums.end());
        reverse(nums.begin(),nums.end()-k);
        reverse(nums.begin(),nums.end());
    }
};