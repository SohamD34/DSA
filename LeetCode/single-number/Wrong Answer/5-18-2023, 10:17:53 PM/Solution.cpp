// https://leetcode.com/problems/single-number

class Solution {
public:
    int singleNumber(vector<int>& nums) {

        sort(nums.begin(),nums.end());

        int prev = nums[0];
        int curr;
        int oddman;

        for(int i=1;i<nums.size();i++){
            curr = nums[i];
            if (prev==curr){
                continue;
            }
            if(prev != curr){
                oddman = prev;
                break;
            }
            prev = curr;
        }
        return oddman;
    }
};