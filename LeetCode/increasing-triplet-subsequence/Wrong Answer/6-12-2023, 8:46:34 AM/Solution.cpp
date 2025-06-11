// https://leetcode.com/problems/increasing-triplet-subsequence

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {

        bool valid = false;
        int last_max = nums[0];
        int count = 1;
        
        for(int i=0; i<nums.size(); i++){

            if(nums[i] > last_max){
                last_max = nums[i];
                count += 1;
            }

            if(count==3){
                valid = true;
                break;
            }
        }

        return valid;
    }
};