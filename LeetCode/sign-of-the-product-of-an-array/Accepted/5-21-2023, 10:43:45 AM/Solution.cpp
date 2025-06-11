// https://leetcode.com/problems/sign-of-the-product-of-an-array

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int pos = 0;
        int neg = 0;

        for(auto i:nums){
            if(i<0){
                neg+=1;
            }
            else if(i==0){
                return 0;
            }
        }

        if(neg%2 == 0){
            return 1;
        }
        else{
            return -1;
        }
    }
};