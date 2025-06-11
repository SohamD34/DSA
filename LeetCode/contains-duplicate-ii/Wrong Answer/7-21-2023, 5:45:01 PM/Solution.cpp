// https://leetcode.com/problems/contains-duplicate-ii

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        int n = nums.size();
        if(n==1 or  n==0){
            return false;
        }

        for(int i=0; i<n-k; i++){
            
            for(int j=i+1; j<=i+k; j++){

                if(nums[i] == nums[j]){
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