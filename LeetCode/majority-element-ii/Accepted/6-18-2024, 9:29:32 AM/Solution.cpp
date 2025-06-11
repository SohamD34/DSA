// https://leetcode.com/problems/majority-element-ii

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        unordered_map<int,int> M;
        set<int> ans;

        int n = nums.size();

        for(int i=0; i<n; i++){
            if(M[nums[i]]){
                M[nums[i]] += 1;
            }
            else{
                M[nums[i]] = 1;
            }

            // if count exceeds
            if(M[nums[i]] >  n/3){
                ans.insert(nums[i]);
            }
        }

        vector<int> v;
        for(auto i:ans){
            v.push_back(i);
        }
        return v;
    }
};