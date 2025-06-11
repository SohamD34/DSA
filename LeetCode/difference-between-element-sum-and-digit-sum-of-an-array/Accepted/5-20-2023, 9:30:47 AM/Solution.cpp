// https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int dig_sum = 0;
        int elem_sum = 0;


        for(auto i:nums){
            elem_sum += i;

            while(i>0){
                dig_sum += i%10;
                i = i/10;
            }
        }

        return abs(elem_sum - dig_sum);
    }
};