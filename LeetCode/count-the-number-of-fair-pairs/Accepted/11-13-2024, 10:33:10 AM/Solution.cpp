// https://leetcode.com/problems/count-the-number-of-fair-pairs

class Solution {
public:
    long long countFairPairs(vector<int>& v, int lower, int upper) {

        long long ans = 0;

        // first sort the array 

        sort(v.begin(), v.end());

        /*
        We have i < j && lower <= nums[i] + nums[j] <= upper
        So, consider for ith value,
        we need to find -->    nums[j] <= upper - nums[i]
                        -->    nums[j] >= lower - nums[i]

        That is if we find the upper bound for (upper - nums[i]) &
        the lower bound for (lower - nums[i]), all values between these two indexes     
        shall satisfy the condition.
        */

        for (int i = 0; i < v.size() - 1; i++) {

            auto up = upper_bound(v.begin() + i + 1, v.end(), upper - v[i]);
            auto low = lower_bound(v.begin() + i + 1, v.end(), lower - v[i]);

            ans += (up - low);
        }
        
        return ans;
    }
};