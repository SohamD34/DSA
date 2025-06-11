// https://leetcode.com/problems/unique-paths

class Solution {
public:
    vector<vector<int>> initialise_grid(int rows, int columns){
        
        vector<vector<int>> grid;

        for(int i=0; i<rows; i++){
            vector<int> v;
            for(int j=0; j<columns; j++){
                v.push_back(0);
            }
            grid.push_back(v);
        }
        return grid;
    }

    int uniquePaths(int m, int n) {
        
        vector<vector<int>> dp = initialise_grid(m, n);

        // starting point 
        dp[0][0] = 1;

        // Since we can only move right or down, for each cell on top row and left-most column --
        
        for(int i=1; i<n; i++){
            dp[0][i] = 1;
        }
        for(int i=1; i<m; i++){
            dp[i][0] = 1;
        }

        // Now for the middle elements, we can either go from previous left->right or from previous top->bottom

        for(int i=1; i<m; i++){
            for(int j=1; j<n; j++){
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }

        return dp[m-1][n-1];
    }
};