// https://leetcode.com/problems/majority-element

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int count = 0;
        int majorityElem = 0;

        for(int i=0; i<nums.size(); ++i){
            if(count == 0){
                majorityElem = nums[i];
            }
            
            if(majorityElem == nums[i]){
                count ++;
            }
            else{
                count -= 1;
            }
        }
        return majorityElem;
    }
};