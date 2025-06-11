// https://leetcode.com/problems/palindrome-number

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
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

        if(x < 0){ 
            return false;
        }
        int a = x;
        int n = get_digits(x);
        int m = n;

        for(int i=0; i<n/2; i++){

            int front_val = a/pow(10, m-1);
            int back_val = x%10;
            if(front_val != back_val){
                return false;
            }
            break;
            m--;
            x/=10;
        }

        return true;
    }
};