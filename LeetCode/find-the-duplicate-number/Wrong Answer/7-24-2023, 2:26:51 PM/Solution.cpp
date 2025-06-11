// https://leetcode.com/problems/find-the-duplicate-number

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int sum = 0;
        int len = 0;
        for(auto i:nums){
            len++;
            sum+=i;
        }

        int n = len-1;

        return sum - (n*(n+1))/2;
    }
};