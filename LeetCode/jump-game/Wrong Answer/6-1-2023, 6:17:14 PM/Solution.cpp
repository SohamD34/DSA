// https://leetcode.com/problems/jump-game

class Solution {
public:
    bool canJump(vector<int>& nums) {

        bool checking = true;
        bool can = true;
        int zero_index;

        for(int i=nums.size()-1; i>=0; i--){

            if(checking){
                if(nums[i]==0){
                    checking = false;
                    zero_index = i;
                }   
            }
            else{
                if(nums[i]==0){
                    zero_index = i;
                    checking = true;
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