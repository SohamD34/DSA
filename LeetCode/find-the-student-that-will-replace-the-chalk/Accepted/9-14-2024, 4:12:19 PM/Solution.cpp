// https://leetcode.com/problems/find-the-student-that-will-replace-the-chalk

class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        
        int n = chalk.size();
        int sum = 0;
        
        for(int i=0; i<n; i++){
            sum += chalk[i];

            if(sum > k){
                return i;
            }
        }

        int remaining_chalk = k%sum;

        sum = 0;
        
        for(int i=0; i<n; i++){
            sum += chalk[i];

            if(sum > remaining_chalk){
                return i;
            }
        }
        
        return -1;
    }
};