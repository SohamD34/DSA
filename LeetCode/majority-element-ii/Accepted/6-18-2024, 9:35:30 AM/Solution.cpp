// https://leetcode.com/problems/majority-element-ii

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    vector<int> majorityElement(vector<int>& nums) {
        
        unordered_map<int,int> M;
        vector<int> v;

        int n = nums.size();

        for(int i=0; i<n; i++){
            if(M[nums[i]]){
                M[nums[i]] += 1;
            }
            else{
                M[nums[i]] = 1;
            }
        }

        for(auto i:M){
            if(i.second > n/3){
                v.push_back(i.first);
            }
        }

        return v;
    }
};