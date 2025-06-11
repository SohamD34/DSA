// https://leetcode.com/problems/contains-duplicate-ii

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        int n = nums.size();

        for(int i=0; i<n-k; i++){
            
            for(int j=1; j<=k; j++){
                if(nums[i] == nums[i+j]){
                    return true;
                }
            }
        }

        if(n==k){
            if(nums[0] == nums[n-1]){
                return true;
            }
        }
        return  false;
    }
};