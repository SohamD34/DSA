// https://leetcode.com/problems/minimum-difference-between-largest-and-smallest-value-in-three-moves

class Solution {
public:
    int minDifference(vector<int>& nums) {

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        if(nums.size() <= 3){
            return 0;
        }

        sort(nums.begin(), nums.end());
        int n = nums.size();

        // delete first 3
        int val1 = nums[n-1] - nums[3];

        // delete last 3
        int val2 = nums[n-4] - nums[0];

        // delete first 1 and last 2
        int val3 = nums[n-3] - nums[1];

        //delete first 2 and last 1
        int val4 = nums[n-2] - nums[2];

        return min(val1, min(val2, min(val3, val4)));
    }
};