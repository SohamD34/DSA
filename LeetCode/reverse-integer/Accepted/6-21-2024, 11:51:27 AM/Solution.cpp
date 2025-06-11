// https://leetcode.com/problems/reverse-integer

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    int reverse(int x) {
        
        long long int y = 0;

        while(x){
            y = y*10;
            int last_dig = x%10;
            y = y + last_dig;
            x = x/10;

            if(y > pow(2,31)-1  || y < -1*pow(2,31)){
                return 0;
            }
        }

        if(x < 0){
            y = -1*y;
        }

        return y;
    }
};