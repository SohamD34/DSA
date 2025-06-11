// https://leetcode.com/problems/find-the-minimum-area-to-cover-all-ones-i

class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int x_min = -1;
        int x_max = -1;
        int y_min = -1;
        int y_max = -1;
        
        int m = grid.size();     // rows
        int n = grid[0].size();  // cols
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                
                
                if(grid[i][j] == 1){
                    x_max = max(x_max, i);
                    y_max = max(y_max, j);
                    
                    x_min = (x_min==-1) ? i : min(x_min,i);
                    y_min = (y_min==-1) ? j : min(y_min, j);
                    
                }
            }
        }
        // cout<<x_min<<" "<<x_max<<" "<<y_min<<" "<<y_max<<endl;
        return (x_max - x_min + 1)*(y_max - y_min + 1);
    }
};