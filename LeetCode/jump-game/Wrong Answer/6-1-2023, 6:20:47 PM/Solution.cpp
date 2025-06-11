// https://leetcode.com/problems/jump-game

class Solution {
public:
    bool canJump(vector<int>& nums) {

        bool checking = true;
        bool can = true;
        int zero_index;
        int prev_zero;

        for(int i=nums.size()-1; i>=0; i--){

            if(checking){
                if(nums[i]==0){
                    checking = false;
                    zero_index = i;
                    prev_zero = i;
                }   
            }
            else{
                if(nums[i]==0){
                    if(i+1 == prev_zero){
                        checking = true;
                        prev_zero = i;
                    }
                    else{
                        zero_index = i;
                        prev_zero = i;
                        checking = true;
                    }
                }
                else if(nums[i] + i > zero_index){
                    can = true;
                }
                else{
                    can = false;
                }
            }
        }

        if(zero_index == 0){
            if(nums.size() > 1){
                return false;
            }
            return true;
        }
        return can;
    }
};