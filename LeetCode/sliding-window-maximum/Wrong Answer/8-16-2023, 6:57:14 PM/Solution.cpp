// https://leetcode.com/problems/sliding-window-maximum

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        // get the max_element of first window.
        int max1 = nums[0];
        for(int i=0; i<k; i++){
            max1 = max(max1,nums[i]);
        }

        vector<int> v;
        v.push_back(max1);

        for(int i=k; i<nums.size(); i++){
            max1 = max(max1, nums[i]);
            v.push_back(max1);
        }

        return v;
    }
};