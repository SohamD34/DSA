// https://leetcode.com/problems/count-primes

class Solution {
public:
    int countPrimes(int n) {

        vector<bool>prime(n,true);

        for(int i=2;i<sqrt(n);i++){
            if(prime[i]){
                for(int j=2;j*i<n;j++){
                    prime[j*i]=false;
                }
            }
        }
        int count=0;
        for(int i=2;i<n;i++){
            if(prime[i])
            count++;
        }
        return count;
    }
};
