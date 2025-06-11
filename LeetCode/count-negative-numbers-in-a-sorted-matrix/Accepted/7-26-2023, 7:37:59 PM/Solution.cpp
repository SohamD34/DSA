// https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
        int count = 0;

        for(auto vec:grid){
            int n = vec.size()-1;

            while(vec[n] < 0){
                count++;
                n--;

                if(n==-1){
                    break;
                }
            }
        }

        return count;
    }
};