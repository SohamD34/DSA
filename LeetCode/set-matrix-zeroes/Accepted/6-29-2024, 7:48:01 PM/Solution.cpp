// https://leetcode.com/problems/set-matrix-zeroes

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    void setZeroes(vector<vector<int>>& matrix) {
        
        unordered_set<int> rows;
        unordered_set<int> cols;

        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                if(matrix[i][j]==0){
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }

        for(auto i:rows){
            for(int j=0; j<matrix[0].size(); j++){
                matrix[i][j] = 0;
            }
        }
        for(auto i:cols){
            for(int j=0; j<matrix.size(); j++){
                matrix[j][i] = 0;
            }
        }
    }
};