// https://leetcode.com/problems/matrix-diagonal-sum

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;

        int n = mat.size();

        if(n>1){
            for(int i=0;i<n;i++){
                sum+=mat[i][i];
            }
            for(int i=n-1;i>=0;i--){
                sum+=mat[i][n-i-1];
            }
            if(n%2 != 0){
                sum -= mat[n/2][n/2];
            }
        }

        else{
            sum = mat[0][0];
        }
        return sum;
    }
};