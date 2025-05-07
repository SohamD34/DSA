/*
7. Reverse Integer

Given a signed 32-bit integer x, return x with its digits reversed. 
If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
 
*/

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