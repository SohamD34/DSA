// https://leetcode.com/problems/find-center-of-star-graph

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }

    int findCenter(vector<vector<int>>& edges) {

        if(edges[0][0]==edges[1][0]){
            return edges[0][0];
        }
        else if(edges[0][0]==edges[1][1]){
            return edges[0][0];
        }
        else if(edges[0][1]==edges[1][1]){
            return edges[0][1];
        }
        return edges[0][1];
    }
};