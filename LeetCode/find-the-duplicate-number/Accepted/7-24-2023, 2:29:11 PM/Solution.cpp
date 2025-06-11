// https://leetcode.com/problems/find-the-duplicate-number

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        unordered_map<int,int> M;

        for(auto i:nums){
            if(M[i]){
                return i;
            }
            else{
                M[i] = 1;
            }
        }
        
        return 1;
    }
};