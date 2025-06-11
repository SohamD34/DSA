// https://leetcode.com/problems/find-center-of-star-graph

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        
        int common_elem;

        if(edges[0][0]==edges[1][0]){
            common_elem = edges[0][0];
        }
        else if(edges[0][0]==edges[1][1]){
            common_elem = edges[0][0];
        }
        else if(edges[0][1]==edges[1][0]){
            common_elem = edges[0][1];
        }
        else if(edges[0][1]==edges[1][1]){
            common_elem = edges[0][1];
        }

        return common_elem;
    }
};