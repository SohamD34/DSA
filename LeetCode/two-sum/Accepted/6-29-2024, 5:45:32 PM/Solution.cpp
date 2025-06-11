// https://leetcode.com/problems/two-sum

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> M;
        vector<int> ans;

        for(int i=0; i<nums.size(); ++i){
            
            if(M.find(target-nums[i]) != M.end()){
                ans.push_back(M[target-nums[i]]-1);
                ans.push_back(i);
                break;
            }
            else{
                M[nums[i]] = i+1;
            }
        }
        return ans;
    }
};