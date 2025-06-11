// https://leetcode.com/problems/product-of-array-except-self

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n=nums.size();

        int fromBegin=1;
        int fromLast=1;

        vector<int> result(n,1);
        
        for(int i=0;i<n;i++){

            result[i] = result[i] * fromBegin;
            fromBegin = fromBegin * nums[i];

            result[n-1-i] = result[n-i-1] * fromLast;
            fromLast = fromLast * nums[n-1-i];
        }
        return res;
    }
};