// https://leetcode.com/problems/fibonacci-number

class Solution {
public:
    int fib(int n) {
        vector<int> fib = {0,1};

        if(n==0 or n==1){
            return fib[n];
        }

        for(int i=2; i<=n; i++){
            fib.push_back(fib[i-2] + fib[i-1]);
        }

        return fib[n];
    }
};