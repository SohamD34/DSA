// https://leetcode.com/problems/find-the-town-judge

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        int count = 0;
        int curr_judge = trust[0][1];

        for(auto pair:trust){

            if(pair[1] == curr_judge){
                count += 1;
                continue;
            }
            else{
                return -1;
            }
        }

        if(count == trust.size()){
            return n;
        }
        return -1;
    }
};