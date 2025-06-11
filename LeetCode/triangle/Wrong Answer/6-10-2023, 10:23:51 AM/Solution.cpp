// https://leetcode.com/problems/triangle

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        
        int index = 0;
        int sum = triangle[0][0];
        int left_index = index;
        int right_index = index + 1;

        for(int i=0; i<triangle.size()-1; i++){

            if(triangle[i+1][left_index] < triangle[i+1][right_index]){
                sum  += triangle[i+1][left_index];
                index = index;
            }
            else{
                sum  += triangle[i+1][right_index];
                index = index + 1;
            }

            int left_index = index;
            int right_index = index + 1;
        }

        return sum;
    }
};