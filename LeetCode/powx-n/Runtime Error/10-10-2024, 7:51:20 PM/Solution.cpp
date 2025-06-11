// https://leetcode.com/problems/powx-n

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    
    double myPow(double x, int n) {
        
        if(n < 0){   
            if(n==-1){
                return ((double)1/x);
            }
            return ((double)1/x) * myPow(x, n+1);
        }
        else{
            if(n==1){
                return x;
            }
            return x * myPow(x, n-1);
        }
        return x;
    }
};