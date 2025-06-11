// https://leetcode.com/problems/count-of-smaller-numbers-after-self

class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        
        vector<int> ans;

        for(int i=0; i<nums.size(); i++){
            int curr_elem = nums[i];

            if(ans.size()==0){
                ans.push_back(0);
            }
            else{
                for(int j=0; j<ans.size(); j++){
                    if(nums[j] > curr_elem){
                        ans[j] = ans[j]+1;
                    }
                }
                ans.push_back(0);
            }
        }
        return ans;
    }
};