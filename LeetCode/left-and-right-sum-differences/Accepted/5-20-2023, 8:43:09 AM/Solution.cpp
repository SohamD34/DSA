// https://leetcode.com/problems/left-and-right-sum-differences

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans;

        int left_sum = 0;
        int right_sum = 0;

        for(int i=1; i<nums.size(); i++){
            right_sum+=nums[i];
        }

        for(int i=0; i<nums.size()-1; i++){
            ans.push_back(abs(left_sum - right_sum));
            left_sum += nums[i];
            right_sum -= nums[i+1];
        }

        ans.push_back(left_sum);
        
        return ans;
    }
};