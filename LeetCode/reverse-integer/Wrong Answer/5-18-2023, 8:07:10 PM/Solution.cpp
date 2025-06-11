// https://leetcode.com/problems/reverse-integer

class Solution {
public:
    int reverse(int x) {
        string op;

        // getting number of digits
        int num = x;
        int count = 0;
        while(num!=0){
            count+=1;
            num = num/10;
        }

        if(x<0){
            op = "-" + op;
            x = -1*x;
        }

        for(int i=0; i<count; i++){
            op = op + to_string(x%10);
            x = x/10;
        }
        cout<<op<<endl;
        return num;
    }
};