// https://leetcode.com/problems/number-of-good-pairs

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {

        int pairs = 0;

        for(int i=0; i<nums.size(); i++){
            int anchor = nums[i];
            
            for(int j=i+1;j<nums.size(); j++){
                if(nums[j] == anchor){
                    pairs+=1;
                }
            }
        }

        return pairs;
    }
};