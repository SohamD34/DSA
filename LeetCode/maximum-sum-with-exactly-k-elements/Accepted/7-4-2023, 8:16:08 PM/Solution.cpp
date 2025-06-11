// https://leetcode.com/problems/maximum-sum-with-exactly-k-elements

class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        
        int sum = 0;
        sort(nums.begin(),nums.end());
        int n = nums.size()-1;

        for(int i=0; i<k; i++){
            sum += nums[n];
            nums[n] += 1;
        }

        return sum;
    }
};