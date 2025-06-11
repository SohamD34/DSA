// https://leetcode.com/problems/3sum-closest

class Solution {
public:
    int dist(int curr_sum, int target){
        return abs(curr_sum - target);
    }

    int threeSumClosest(vector<int>& nums, int target) {

        sort(nums.begin(), nums.end());
        int closest_sum = 0;
        int prev_min_dist = INT_MAX;

        for (int i = 0; i < nums.size(); i++){
            int j = i + 1;
            int k = nums.size() - 1;

            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                int curr_dist = dist(sum,target);

                if (curr_dist == prev_min_dist) {
                    j++;
                    k--;
                } 
                else if (curr_dist < prev_min_dist) {
                    prev_min_dist = curr_dist;
                    closest_sum = sum;
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