// https://leetcode.com/problems/3sum-closest

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        sort(nums.begin(), nums.end());

        int closest_sum =  nums[0] + nums[1] + nums[2];
        int prev_min_dist = abs(closest_sum - target);

        for (int i = 0; i < nums.size()-1; i++){
            int j = i + 1;
            int k = nums.size() - 1;

            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                int curr_dist = abs(sum - target);

                if (curr_dist < prev_min_dist) {
                    closest_sum = sum;
                    prev_min_dist = abs(closest_sum - target);
                }
                if(sum < target){
                    j++;
                }
                else {
                    k--;
                }
            }
        }

        return closest_sum;
    }
    
};