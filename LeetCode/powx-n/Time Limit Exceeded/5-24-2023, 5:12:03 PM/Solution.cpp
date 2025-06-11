// https://leetcode.com/problems/powx-n

class Solution {
public:
    double myPow(double x, int n) {

        double ans = 1;

        if(n>=0){
            for(int i=0; i<n; i++){
                ans*=x;
            }
            return ans;
        }
        else{
            for(int i=0;i<(-1*n); i++){
                ans*=x;
            }
            return (double)(1/ans);
        }
    }
};