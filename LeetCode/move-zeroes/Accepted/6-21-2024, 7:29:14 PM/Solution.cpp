// https://leetcode.com/problems/move-zeroes

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    void moveZeroes(vector<int>& nums) {
        
        int n = nums.size();
        int pos = 0;
        int i = 0;

        while(i!=n){
            if(nums[i] != 0){
                nums[pos] = nums[i];
                pos++;
            }
            i++;
        }

        for(int i=pos; i<n; i++){
            nums[i] = 0;
        }
    }
};