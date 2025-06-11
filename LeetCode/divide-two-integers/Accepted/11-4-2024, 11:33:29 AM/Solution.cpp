// https://leetcode.com/problems/divide-two-integers

class Solution {
public:
    long long bit_divide(long long a, long long b) {

        if(a == INT_MIN && b == -1)
            return INT_MAX;
    
        int sign = ((a < 0) ^ (b < 0)) ? -1 : 1;

        a = abs(a);
        b = abs(b);

        long long quotient = 0;

        for (int i = 31; i >= 0; --i) {
            if ((b << i) <= a) {
                a -= (b << i);
                quotient |= (1LL << i);
            }
        }

        return sign * quotient;
    }

    int divide(int dividend, int divisor) {
        return bit_divide(dividend, divisor);
    }
    

};