// https://leetcode.com/problems/number-of-arithmetic-triplets

class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        
        int anchor;
        int leftptr;
        int rightptr;
        int count = 0;

        for(int i=1; i<nums.size()-1; i++){
            anchor = nums[i];

            for(int j=i-1; j>=0; j--){
                leftptr = nums[j];

                if(anchor - leftptr == diff){

                    for(int k=i+1; k<=nums.size()-1; k++){
                        rightptr = nums[k];

                        if(rightptr-anchor==diff){
                            count++;
                        }
                    }
                }
            }
        }
        return count;
        
    }
};