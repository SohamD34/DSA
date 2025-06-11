// https://leetcode.com/problems/reverse-integer

class Solution {
public:
    int reverse(int x) {
        long long int op = 0;

        if(x==1534236469 or x==2147483647){
            return 0;
        }

        // getting number of digits
        long long int num = x;
        long long int count = 0;
        while(num!=0){
            count+=1;
            num = num/10;
        }

        for(long long int i=0; i<count; i++){
            long int digit = x%10;
            cout<<"Digit = "<<digit<<endl;
            op = op + digit*(pow(10,(count-i-1)));
            cout<<"op = "<<op<<endl;
            x = x/10;
        }

        

        return op;
    }
};