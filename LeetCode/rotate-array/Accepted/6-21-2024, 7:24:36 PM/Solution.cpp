// https://leetcode.com/problems/rotate-array

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    void rotate(vector<int>& nums, int k) {
        vector<int> numcopy = nums;
        for(int i=0;i<nums.size();i++) 
            nums[(i+k)%nums.size()]=numcopy[i];
    }
};