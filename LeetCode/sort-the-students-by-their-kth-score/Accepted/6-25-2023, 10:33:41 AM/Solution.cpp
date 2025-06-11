// https://leetcode.com/problems/sort-the-students-by-their-kth-score

class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        
        unordered_map<int,vector<int>> M;
        vector<int> kth;

        for(auto i:score){
            M[i[k]] = i;
            kth.push_back(i[k]);
        }

        sort(kth.rbegin(),kth.rend());

        for(int i=0; i<score.size(); i++){
            score[i] = M[kth[i]];
        }


        return score;
    }
};