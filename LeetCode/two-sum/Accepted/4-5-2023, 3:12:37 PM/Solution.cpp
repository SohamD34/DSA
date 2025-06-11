// https://leetcode.com/problems/two-sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vec;
        for(int i=0;i<size(nums);i++)
        {
            int yes = 0;
            for(int j=0;j<size(nums);j++)
            {
                if (i!=j && nums[i]+nums[j]==target){
                    vec.push_back(i);
                    vec.push_back(j);
                    yes = 1;
                    break;
                }
            }
            if(yes==1){
                break;
            }
        }
        return vec;
    }
};