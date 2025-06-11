// https://leetcode.com/problems/maximum-product-difference-between-two-pairs

class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        
        int n = nums.size();
        int M1 = INT_MIN; int M2 = INT_MIN;
        int m1 = INT_MAX; int m2 = INT_MAX;

        for(auto i:nums){
            if(i>M1){
                M1 = i;
            }
            if(i<m1){
                m1 = i;
            }
        }

        for(auto i:nums){
            if(i>M2 && i<M1){
                M2 = i;
            }
            if(i<m2 && i>m1){
                m2 = i;
            }
        }


        return (M1*M2 - m1*m2);
    }
};