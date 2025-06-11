// https://leetcode.com/problems/kth-largest-element-in-an-array

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    int findKthLargest(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());
        return nums[nums.size()-k];
    }
};