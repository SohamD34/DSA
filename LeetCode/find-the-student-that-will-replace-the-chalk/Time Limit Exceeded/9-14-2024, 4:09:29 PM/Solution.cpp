// https://leetcode.com/problems/find-the-student-that-will-replace-the-chalk

class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        
        int curr_student = 0;
        int num_students = chalk.size();

        while(k>0){
            
            // cout<<"Remaining "<<k<<" Current "<<chalk[curr_student]<<endl;
            if(chalk[curr_student] > k){
                return curr_student;
            }

            k -= chalk[curr_student];
            curr_student++;

            if(curr_student == num_students){
                curr_student = 0;
            }
        }

        return curr_student;
    }
};