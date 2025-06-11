// https://leetcode.com/problems/jump-game

class Solution {
public:
    bool canJump(vector<int>& nums) {

        int curr_pos = 0;
        int target = nums.size()-1;

        while(curr_pos < target){
            int steps = nums[curr_pos];
            if(steps==0){
                return false;
            }
            curr_pos += steps;
        }

        if(curr_pos == target){
            return true;
        }
        else{
            return false;
        }
    }
};