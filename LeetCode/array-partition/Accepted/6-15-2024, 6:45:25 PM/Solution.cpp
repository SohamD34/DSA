// https://leetcode.com/problems/array-partition

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    int arrayPairSum(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        int sum = 0;
        int n = nums.size();

        for(int i=0; i<n; i+=2){
            sum += nums[i];
        }

        return sum;
    }
};