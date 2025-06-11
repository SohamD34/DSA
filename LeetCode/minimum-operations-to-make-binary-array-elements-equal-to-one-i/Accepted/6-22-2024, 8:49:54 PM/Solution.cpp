// https://leetcode.com/problems/minimum-operations-to-make-binary-array-elements-equal-to-one-i

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    int minOperations(vector<int>& nums) {
        
        int n = nums.size();
        int changes = 0;
        
        for(int i=0; i<n-2; i++){
            if(nums[i]==0){
                nums[i] = 1;
                nums[i+1] ^= 1;
                nums[i+2] ^= 1;
                changes += 1;
            }
        }
        
        if(nums[n-1]==0 || nums[n-2]==0){
            return -1;
        }
        return changes;
    }
};