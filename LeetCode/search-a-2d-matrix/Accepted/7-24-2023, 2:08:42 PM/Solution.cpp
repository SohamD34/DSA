// https://leetcode.com/problems/search-a-2d-matrix

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        for(int i=0; i<m; i++){
            int begin = matrix[i][0];
            int end = matrix[i][n-1];

            if(begin<=target && target<=end){
                for(int j=0; j<n; j++){
                    if(matrix[i][j] == target){
                        return true;
                    }
                }
            }
            if(begin > target){
                return false;
            }
        }
        return false;
    }
};