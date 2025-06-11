// https://leetcode.com/problems/jump-game

class Solution {
public:
    bool canJump(vector<int>& nums) {

        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int curr = nums.size()-1;

        for(int i=nums.size()-1; i>=0; i--){

            if(i + nums[i] >= curr){
                curr = i;
            }
        }

        if(curr == 0){
            return true;
        }
        return false;
    }
};