// https://leetcode.com/problems/maximum-sum-with-exactly-k-elements

class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        
        int max_val = 0;
        int sum = 0;

        for(auto i:nums){
            if(i>max_val){
                max_val = i;
            }
        }

        for(int i=0; i<k; i++){
            sum += max_val;
            max_val += 1;
        }

        return sum;
    }
};