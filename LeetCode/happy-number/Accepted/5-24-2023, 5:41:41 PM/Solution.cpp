// https://leetcode.com/problems/happy-number

class Solution {
public:
    int digit_square_sum(int n){
        int sum = 0;
        while(n > 0){
            sum += ((n%10)*(n%10));
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        
        int count = 0;
        
        while(count<15){
            int x = digit_square_sum(n);
            if(x == 1){
                return true;
            }
            else{
                n = x;
            }
            count += 1;
        }

        return false;
    }
};