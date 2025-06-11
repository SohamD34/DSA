// https://leetcode.com/problems/number-complement

class Solution {
public:
    int findComplement(int num) {
        
        int ans = 0;
        while(num){
            int dig = num%2;
            ans *= 2;
            ans += (dig^1);
            num /= 2;
        }
        // cout<<ans;
        return ans;
    }
};