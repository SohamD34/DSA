// https://leetcode.com/problems/find-eventual-safe-states

class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        
        set<int> connected_to_terminal;

        for(int i=0; i<graph.size(); i++){

            vector<int> connections = graph[i];

            int count = 0;

            if(connections.size()==0){
                connected_to_terminal.insert(i);
            }
            else{
                for(auto j:connections){
                    if(graph[j].size()==0){
                        count += 1;
                    }
                }

                if(count==connections.size()){
                    connected_to_terminal.insert(i);
                }
            }
            
        }

        vector<int> ans;
        for(auto i: connected_to_terminal){
            ans.push_back(i);
        }
        return ans;
    }
};