// https://leetcode.com/problems/powx-n

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }

    double ans = 1;

    double myPow(double x, int n) {
        
        if(n < 0){   
            while(n != 0){
                ans *= (double)1/x;
                n++;
            }
        }
        else{
            while(n--){
                ans *= x;
            }
        }
        return ans;
    }
};