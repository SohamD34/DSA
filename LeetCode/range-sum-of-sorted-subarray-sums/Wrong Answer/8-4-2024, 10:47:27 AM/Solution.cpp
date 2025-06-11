// https://leetcode.com/problems/range-sum-of-sorted-subarray-sums

class Solution {
public:
    static const int mod = 7+1e9;
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }

    vector<int> get_subarray_sums(vector<int> nums, int n){

        vector<int> subarray_sums;

        for(int start=0; start<n; start++){

            int curr_sum = nums[start];
            subarray_sums.push_back(curr_sum);

            for(int end=start+1; end<n; end++){
                curr_sum += nums[end];
                int val = curr_sum%mod;
                subarray_sums.push_back(val);
            }
        }
        return subarray_sums;
    }

    int rangeSum(vector<int>& nums, int n, int left, int right) {
        
        vector<int> subarray_sums = get_subarray_sums(nums, n);
        
        sort(subarray_sums.begin(), subarray_sums.end());

        long long sum = 0;
        for(int i=left-1; i<right; i++){
            sum += subarray_sums[i];
            // sum %= mod;
        }

        return sum;
    }
};