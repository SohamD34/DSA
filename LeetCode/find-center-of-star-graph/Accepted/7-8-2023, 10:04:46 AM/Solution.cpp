// https://leetcode.com/problems/find-center-of-star-graph

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        
        int common_elem;

        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                if(edges[0][i]==edges[1][j]){
                    common_elem = edges[0][i];
                    break;
                }
            }
        }
        return common_elem;
    }
};