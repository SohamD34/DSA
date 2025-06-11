// https://leetcode.com/problems/3sum

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> ans;

        for(int i=0; i<nums.size()-2; i++){
            for(int j=i+1; j<nums.size()-1; j++){
                for(int k=j+1; k<nums.size(); k++){
                    if(nums[i] + nums[j] + nums[k] == 0){
                        vector<int> n = {nums[i], nums[j], nums[k]};
                        sort(n.begin(),n.end());

                        if(find(ans.begin(), ans.end(), n)==ans.end()){
                            ans.push_back(n);
                        }
                        
                    }
                }
            }
        }

        return ans;
    }
};