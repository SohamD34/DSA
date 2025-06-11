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

        for(int a=0; a<rows.size(); ++a){
            i = rows[a];
            for(int j=0; j<matrix[0].size(); j++){
                matrix[i][j] = 0;
            }
        }
        for(int a=0; a<rows.size(); ++a){
            i = cols[a];
            for(int j=0; j<matrix.size(); j++){
                matrix[j][i] = 0;
            }
        }
    }
};