// https://leetcode.com/problems/palindrome-number

class Solution {
public:
    int get_digits(int x){

        if(x==0){
            return 1;
        }

        int count = 0;
        while(x){
            count++;
            x = x/10;
        }
        return count;
    }

    bool isPalindrome(int x) {
        int a = x;
        int n = get_digits(x);

        // int front_val, back_val;

        for(int i=0; i<n/2; i++){

            int front_val = a/pow(10, n-1);
            cout<<front_val<<endl;
            a = a%(front_val * pow(10, n-1));
        }
        return true;
    }
};