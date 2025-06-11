// https://leetcode.com/problems/frequency-of-the-most-frequent-element

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        
        int n = nums.size();

        // Sort the array

        sort(nums.begin(), nums.end());

        // FInd sum of difference of each elem with its smaller elems.
        // sum of diff = i*arr[i] - prefix_sum[i]

        vector<int> prefix_sum;
        prefix_sum.push_back(0);

        for(int i=1; i<n; i++){
            prefix_sum.push_back(prefix_sum[i-1] + nums[i-1]);
        }

        // Replace nums value with corresponding diff value

        int count = 0;

        for(int i=0; i<n; i++){
            nums[i] = i*nums[i] - prefix_sum[i];

            if(nums[i] <= k){
                count = i;
            }
            else{
                break;
            }
        }

        return count+1;
    }
};