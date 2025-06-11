// https://leetcode.com/problems/rearrange-array-elements-by-sign

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    vector<int> rearrangeArray(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> ans(n,0);

        int pos = 0;
        int neg = 1;
        int ptr = 0;

        while(ptr < n){
            if(nums[ptr] > 0){
                ans[pos] = nums[ptr];
                pos += 2;
            }
            else{
                ans[neg] = nums[ptr];
                neg += 2;
            }
            ptr++;
        }
        
        return ans;
    }
};