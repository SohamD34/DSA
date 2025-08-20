#include <bits/stdc++.h>
using namespace std;

void print(vector<vector<int>> &M){

    for(int i=0;i<M.size();i++){
        for(int j=0; j<M[i].size(); j++){
            cout << M[i][j] << ' ';
        }
        cout<<endl;
    }
    cout << endl;
}

int countSquares(vector<vector<int>> &matrix){

    // Brute force approach - O(r2*c2)
    // Stand at every (i,j) 
    // Check every possible square whose top left corner is (i,j)
    // Count for all such square if all are filled with 1

    int rows = matrix.size();
    int cols = matrix[0].size();

    vector<vector<int>> dp(rows, vector<int>(cols, 0));
    // print(dp);

    // start by filling just the 0th row and column

    int sum = 0;

    for(int c=0; c<cols; c++){
        dp[0][c] = matrix[0][c];
        sum += dp[0][c];
    }
    for(int r=0; r<rows; r++){
        dp[r][0] = matrix[r][0];
        sum += dp[r][0];
    }
    sum -= dp[0][0];    // since it is calculated twice in the loops

    // print(dp);

    for(int r=1; r<rows; r++){
        for(int c=1; c<cols; c++){

            if(matrix[r][c] == 1){
                dp[r][c] = 1 + min(dp[r-1][c-1], min(dp[r-1][c], dp[r][c-1]));
                sum += dp[r][c];
            }
            else{
                dp[r][c] = 0;
            }
        }
    }


    return sum;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<vector<int>> matrix = {
        {0,1,1,1},
        {1,1,1,1},
        {0,1,1,1}
    };
    cout << countSquares(matrix) <<endl;


    matrix = {
        {1,0,1},
        {1,1,0},
        {1,1,0}
    };
    cout << countSquares(matrix) <<endl;


    return 0;
}