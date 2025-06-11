// https://leetcode.com/problems/minimum-size-subarray-sum

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int start = 0;
        int end = 0;
        int min_length = nums.size();
        int curr_sum = 0;

        while(start <= end && end < nums.size()){
            if(nums[start] == target){
                min_length = 1;
                break;
            }

            curr_sum += nums[end];

            if(curr_sum < target){
                end+=1;
            }
            else if(curr_sum > target){
                curr_sum -= nums[start];
                start+=1;
            }
            else{
                int curr_length = end - start +1;
                min_length = min(curr_length, min_length);
                end += 1;
            }
        }

        if(min_length == nums.size() && curr_sum != target){
            return 0;
        }
        return min_length;

    }
};