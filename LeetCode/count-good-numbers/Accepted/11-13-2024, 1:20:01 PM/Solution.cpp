// https://leetcode.com/problems/count-good-numbers

class Solution {
public:
    int M = 1e9+7;

    /*
    For even n we will have perfectly n/2 groups each having 20 options.
    Thus we first find out 20^(n/2). If n is odd multiply it by 5. Then return.
    For calculating power we will use recursive binary exponentiation.
    */

    long long power(long long b, long long e, long long ans) {
        if(e == 0){
            return ans;
        }
        if(e & 1){
            return power(b, e-1, (ans*b)%M);
        }
        return power((b*b)%M, e/2, ans);
    }

    int countGoodNumbers(long long n) {

        long long temp = power(20, n/2, 1);
        
        return (n&1) ? (temp*5)%M : temp;
    }
};