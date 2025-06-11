// https://leetcode.com/problems/convert-1d-array-into-2d-array

class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        
        vector<vector<int>> ans;

        if(original.size() != m*n){
            return ans;
        }

        int index = 0;
        for(int i=0; i<m; i++){

            vector<int> v;

            for(int j=0; j<n; j++){
                v.push_back(original[index]);
                index += 1;
            }
            ans.push_back(v);
        }

        return ans;
    }   
};