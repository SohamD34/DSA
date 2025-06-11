// https://leetcode.com/problems/maximum-sum-with-exactly-k-elements

class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int sum = 0;
        int n = nums.size()-1;
        while(k--){
            sum+=nums[n];
            nums[n]++;
        }
        return sum;
    }
};