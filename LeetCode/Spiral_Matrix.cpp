class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
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
};