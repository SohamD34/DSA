// https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    int longestSubarray(vector<int>& nums) {
        int zeroCount = 0;
        int longestWindow = 0;
        int start = 0;
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {

            zeroCount += (nums[i] == 0);

            while (zeroCount > 1) {
                zeroCount -= (nums[start] == 0);
                start++;
            }
            longestWindow = max(longestWindow, i - start);
        }

        return longestWindow;
    }
};