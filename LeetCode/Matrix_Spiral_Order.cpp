#include <iostream>
#include <vector>
using namespace std;

/*
Given an m x n matrix, return all elements of the matrix in spiral order.

Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]

Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]

*/

vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
    vector<int> spiral;
    int m = matrix.size();
    int n = matrix[0].size();

    int i=0;
    int j=0;

    while(spiral.size() < m*n){
        // Move right
        while(j<n && matrix[i][j] != -101){
            spiral.push_back(matrix[i][j]);
            matrix[i][j] = -101;
            j++;
        }
        j--;
        i++;

        // Move down
        while(i<m && matrix[i][j] != -101){
            spiral.push_back(matrix[i][j]);
            matrix[i][j] = -101;
            i++;
        }
        i--;
        j--;

        // Move left
        while(j>=0 && matrix[i][j] != -101){
            spiral.push_back(matrix[i][j]);
            matrix[i][j] = -101;
            j--;
        }
        j++;
        i--;

        // Move up
        while(i>=0 && matrix[i][j] != -101){
            spiral.push_back(matrix[i][j]);
            matrix[i][j] = -101;
            i--;
        }
        i++;
        j++;
    }

    return spiral;
}


int main(){

    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    vector<int> spiral = spiralOrder(matrix);

    for(int i=0; i<spiral.size(); i++){
        cout<<spiral[i]<<" ";
    }
    cout<<endl;
 
    return 0;
}