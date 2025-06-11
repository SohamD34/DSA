// https://leetcode.com/problems/container-with-most-water

class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area = 0;
        int indx1 = 0;
        int indx2 = 0;

        for (int i=0;i<height.size();i++){
            for (int j=0;j<height.size();j++){
                if (j!=i){

                    if (abs((j-i)*min(height[i],height[j])) > max_area){
                        max_area = (j-i)*min(height[i],height[j]);
                    }
                }
            }
        }
        return max_area;
    }
};