// https://leetcode.com/problems/maximum-gap

class Solution {
public:
    int maximumGap(vector<int>& nums) {
        
        // use count sort / radix sort for O(n) sorting -- heavy use of extra space

        sort(nums.begin(), nums.end());
        int n = nums.size();
        int max_diff = 0;
        for(int i=1; i<n; i++){
            max_diff = (max_diff < (nums[i]-nums[i-1]))?(nums[i]-nums[i-1]):max_diff;
        }
        return max_diff;
    }
};