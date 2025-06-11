// https://leetcode.com/problems/powx-n

class Solution{
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    double solve(double x, long n){

        if(n<0){
            return solve(1/x,-n);
        }
        if(n==0){
            return 1;
        }
        if(n%2 == 0){                  
            return solve(x*x,n/2);     
        }
        else{                       
            return x*solve(x*x,n/2);
        }
    }

    double myPow(double x, int n){
        double ans = solve(x, long(n));
        return ans;
    }
};