// https://leetcode.com/problems/reverse-integer

class Solution {
public:
    int reverse(int x) {
        int op = 0;

        // getting number of digits
        int num = x;
        int count = 0;
        while(num!=0){
            count+=1;
            num = num/10;
        }

        for(int i=0; i<count; i++){
            int digit = x%10;
            cout<<digit<<endl;
            x = x/10;
        }
        // x = stoi(x);
        return x;
    }
};