// https://leetcode.com/problems/convert-1d-array-into-2d-array

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        
        vector<vector<int>> ans;

        int total = original.size();

        if(total != m*n){
            return ans;
        }

        vector<int> v;

        for(int i=0; i<total; i++){

            v.push_back(original[i]);

            if(v.size() == n){
                ans.push_back(v);
                v.clear();
            }
        }

        original.clear();

        return ans;
    }   
};