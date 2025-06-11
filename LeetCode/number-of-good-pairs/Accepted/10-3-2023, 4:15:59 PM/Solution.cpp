// https://leetcode.com/problems/number-of-good-pairs

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {

        int pairs = 0;

        for(int i=0; i<nums.size(); i++){
            for(int j=i+1;j<nums.size(); j++){
                if(nums[j] == nums[i]){
                    pairs+=1;
                }
            }
        }

        return pairs;
    }
};