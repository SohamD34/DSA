// https://leetcode.com/problems/reverse-integer

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    int reverse(int x) {
        
        int y = 0;

        while(x){
            y = y*10;
            int last_dig = x%10;
            y = y + last_dig;
            x = x/10;
        }

        return y;
    }
};