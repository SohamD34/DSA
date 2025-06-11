// https://leetcode.com/problems/number-of-provinces

class Solution {
public:

    void dfs(vector<vector<int> >& matrix, vector<vector<bool> >& visited, int x, int y, int n, int m){
        if (x < 0 || y < 0 || x >= n || y >= m|| visited[x][y] == true || matrix[x][y] == 0){
            return;
        }
        visited[x][y] = true;

        dfs(matrix, visited, x + 1, y, n, m);
        dfs(matrix, visited, x, y + 1, n, m);
        dfs(matrix, visited, x - 1, y, n, m);
        dfs(matrix, visited, x, y - 1, n, m);
    }
 
    int countClosedIsland(vector<vector<int> >& matrix, int n,int m){

        vector<vector<bool> > visited(n,vector<bool>(m, false));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if ((i * j == 0 || i == n - 1 || j == m - 1) and matrix[i][j] == 1 and visited[i][j] == false)
                    dfs(matrix, visited, i, j, n, m);
            }
        }
        int result = 0;
    
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (visited[i][j] == false and matrix[i][j] == 1) {
                    result++;
                    dfs(matrix, visited, i, j, n, m);
                }
            }
        }
        return result;
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        
        return countClosedIsland(isConnected, isConnected.size(),isConnected[0].size());
    }
};