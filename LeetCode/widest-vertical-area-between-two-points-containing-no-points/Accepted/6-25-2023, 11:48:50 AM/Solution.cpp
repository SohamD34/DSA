// https://leetcode.com/problems/widest-vertical-area-between-two-points-containing-no-points

class Solution {
public:

    int maxWidthOfVerticalArea(vector<vector<int>>& points) {

        sort(points.begin(), points.end());

        int max_diff = 0;
        
        for(int i=0; i<points.size()-1; i++){
            int diff = points[i+1][0] - points[i][0];

            if(diff > max_diff){
                max_diff = diff;
            }
        }

        return max_diff;
    }
};