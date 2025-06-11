// https://leetcode.com/problems/single-number-ii

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        unordered_map<int,int> M;

        for(auto i:nums){
            M[i] += 1;
        }

        int ans ;

        for(auto pair:M){
            if(pair.second == 1){
                ans = pair.first;
                break;
            }
        }
        return ans;
    }
};