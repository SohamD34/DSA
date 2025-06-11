// https://leetcode.com/problems/minimum-average-of-smallest-and-largest-elements

class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        
        vector<int> averages;
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        
        double min_avg = -1;
        int front = 0;
        int back = n-1;
        
        for(int i=0; i<n/2; i++){
            double avg = (float)(nums[front] + nums[back])/2;
            
            if(min_avg == -1){
                min_avg = avg;
            }
            else{
                min_avg = (min_avg>avg)?avg:min_avg;
            }
            
            front ++;
            back --;
        }
        return min_avg;
    }
};