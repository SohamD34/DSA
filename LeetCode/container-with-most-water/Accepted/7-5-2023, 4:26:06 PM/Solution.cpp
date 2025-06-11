// https://leetcode.com/problems/container-with-most-water

class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area = INT_MIN;
          int i = 0;
          int j = height.size()-1;

          while(i<=j){

            int curr_area =( min(height[i],height[j]) * (j-i));

            max_area =  max(max_area, curr_area);

            if(height[i] < height[j]){
                i++;
            }
            else if(height[i] > height[j]){
                j--;
            }
            else if(height[i] == height[j]){
                i++;
                j--;
            }
          }

        return max_area;
    }
};