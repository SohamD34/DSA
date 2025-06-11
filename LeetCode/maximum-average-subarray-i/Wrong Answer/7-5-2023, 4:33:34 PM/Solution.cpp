// https://leetcode.com/problems/maximum-average-subarray-i

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        double max_avg = 0;
        double avg = 0;

        int n = nums.size();

        for(int i=0; i<n-k+1; i++){

            double sum = 0;
            for(int j=i; j<i+k; j++){
                sum += nums[j];
            }

            avg = (double)sum/k;
            max_avg = max(avg,max_avg);
        }

        return max_avg;
    }
};