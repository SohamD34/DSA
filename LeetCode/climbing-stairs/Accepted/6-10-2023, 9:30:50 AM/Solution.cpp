// https://leetcode.com/problems/climbing-stairs

class Solution {
public:
    int climbStairs(int n) {
        
        vector<int> steps;

        for(int i=0; i<n; i++){
            if(i==0 or i==1){
                steps.push_back(i+1);
            }
            else{
                steps.push_back(steps[i-1] + steps[i-2]);
            }
        }

        return steps[n-1];
    }
};