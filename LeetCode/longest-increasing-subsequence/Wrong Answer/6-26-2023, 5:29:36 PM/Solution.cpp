// https://leetcode.com/problems/longest-increasing-subsequence

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        int n = nums.size();

        int lis[n];
        memset(lis,1,sizeof(lis));
    
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++){
                if (nums[i] > nums[j] && lis[i] < lis[j] + 1){
                    lis[i] = lis[j] + 1;
                }
            }
        }
    
        int max_val = 0;
        for(auto i: lis){
            if(i > max_val){
                max_val = i;
            }
        }

        return max_val;
    }
};