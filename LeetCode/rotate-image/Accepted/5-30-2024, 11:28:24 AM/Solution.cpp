// https://leetcode.com/problems/rotate-image

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    void rotate(vector<vector<int>>& matrix) {
        
        vector<vector<int>> M ;
        for(int i=0; i<matrix[0].size(); i++){
            vector<int> a;
            M.push_back(a);
        }
        cout<<M.size()<<endl;

        for(int j=0; j<matrix[0].size(); j++){
            for(int i=0; i<matrix[0].size(); i++){
                M[i].insert(M[i].begin(),matrix[j][i]);
            }
        }

        matrix = M;
    }
};