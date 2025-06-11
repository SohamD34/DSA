// https://leetcode.com/problems/contains-duplicate

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_map<int,int> M;

        for(int i=0; i<nums.size(); i++){
            if(M[nums[i]]==1){
                return true;
            }
            else{
                M[nums[i]] = 1;
            }
        }
        return false;
    }
};