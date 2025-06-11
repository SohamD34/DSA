// https://leetcode.com/problems/minimum-array-end

class Solution {
public:
    long long minEnd(int n, int x) {
        
        // a & b & c = x
        // So, in any case, the bits of x that are 1 must be 1 in a, b, c.
        // Now with this constraint, the minimum number we can achieve is 'x' itself.
        // So, a = x as (a < b < c).

        // a = x;

        // Now for the next number -- it has to be greater than a, but at the same time, it should satisfy the AND constraint.

        // If a = 101 --> b = a+1 = 110
        // a & b --> 101 & 110 --> 100 so we lost the 1 in the last bit which violated AND constraint.
        // So I need to find the number that keeps the 1s in the same place & allows 0 in other places.

        // b = (a+1) | a;

        // Similarly for c ->

        // c = (b+1) | a;

        long long prev = x;

        for(int i=0; i<n-1; i++){
            prev = (prev + 1) | x;
        }

        return prev;
    }
};