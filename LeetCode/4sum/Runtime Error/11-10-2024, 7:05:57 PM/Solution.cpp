// https://leetcode.com/problems/4sum

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        int n = nums.size();

        sort(nums.begin(), nums.end());

        set<vector<int>> s;
        vector<vector<int>> ans;

        for(int i=0; i<n-3; i++){
            for(int j=i+1; j<n-2; j++){
                for(int k=j+1; k<n-1; k++){
                    for(int l=k+1; l<n; l++){
                        if(nums[i] + nums[j] + nums[k] + nums[l] == target){
                            vector<int> v = {nums[i],nums[j], nums[k], nums[l]};
                            s.insert(v);
                        }
                    }
                }
            }
        }

        for(auto i:s){
            ans.push_back(i);
        }
        return ans;
    }
};