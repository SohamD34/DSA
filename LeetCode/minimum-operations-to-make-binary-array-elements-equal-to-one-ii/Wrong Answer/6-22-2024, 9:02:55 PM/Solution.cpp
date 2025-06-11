// https://leetcode.com/problems/minimum-operations-to-make-binary-array-elements-equal-to-one-ii

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    int minOperations(vector<int>& nums) {
        
        int n = nums.size();
        int count = 0;
        int max = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == 1){
                count++;
                if(count > max){
                    max = count;
                }
            }else{
                count = 0;
            }
        }
        return n - max;
    }
};