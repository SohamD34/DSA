// https://leetcode.com/problems/longest-consecutive-sequence

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());

        bool begin_check = true;
        bool end_check = 0;
        int curr_length = 0;
        int max_length = 0;

        for(int i=0; i<nums.size() - 1; i++){

            if(begin_check == false){
                if(nums[i] == nums[i+1] - 1){
                    begin_check = true;
                    curr_length = 1;
                }
            }
            else{
                if(nums[i] == nums[i+1]-1){
                    curr_length += 1;
                }
                else{
                    curr_length += 1;
                    max_length = (curr_length>max_length)?curr_length:max_length;
                    curr_length = 1;
                }
            }
        }
        max_length = (curr_length>max_length)?curr_length:max_length;
        return max_length;

    }
};