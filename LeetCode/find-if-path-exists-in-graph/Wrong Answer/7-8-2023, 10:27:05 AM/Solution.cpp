// https://leetcode.com/problems/find-if-path-exists-in-graph

class Solution {
public:
    set<int> connections;

    bool IsConnection(int node){
        for(auto i:connections){
            if(i==node){
                return true;
            }
        }
        return false;
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        
        connections.insert(source);

        if(source == destination){
            return true;
        }

        for(int a=0; a<n; a++){
            for(auto i:edges){
                if(IsConnection(i[0])){
                    connections.insert(i[1]);

                    if(i[1] == destination){
                        return true;
                    }
                }
                else if(IsConnection(i[1])){
                    connections.insert(i[0]);

                    if(i[1] == destination){
                        return true;
                    }
                }
            }
        }

        return false;
    }
};