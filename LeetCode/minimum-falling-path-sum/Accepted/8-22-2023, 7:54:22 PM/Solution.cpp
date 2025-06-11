// https://leetcode.com/problems/minimum-falling-path-sum

class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        
        int n = matrix.size();

        for(int i=1; i<n; i++){
            for(int j=0; j<n; j++){

                if(j==0){
                    matrix[i][j] = matrix[i][j] + min(matrix[i-1][j], matrix[i-1][j+1]);
                }
                else if(j==n-1){
                    matrix[i][j] = matrix[i][j] + min(matrix[i-1][j], matrix[i-1][j-1]);
                }
                else{
                    matrix[i][j] = matrix[i][j] + min(min(matrix[i-1][j], matrix[i-1][j+1]), matrix[i-1][j-1]);
                }
            }
        }

        int min_sum = INT_MAX;
        for(int i=0; i<n; i++){
            min_sum = min(min_sum, matrix[n-1][i]);
        }

        return min_sum;
    }
};