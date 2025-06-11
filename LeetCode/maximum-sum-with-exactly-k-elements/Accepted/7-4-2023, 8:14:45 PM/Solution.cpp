// https://leetcode.com/problems/maximum-sum-with-exactly-k-elements

class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        
        int sum = 0;

        sort(nums.begin(),nums.end());
        int max_val = nums[nums.size()-1];

        for(int i=0; i<k; i++){
            sum += max_val;
            max_val += 1;
        }

        return sum;
    }
};