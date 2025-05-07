#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
  
void SieveOfEratosthenes(int n, vector<int> vec){

    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
  
    for (int p = 2; p * p <= n; p++) {
        
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p){
                prime[i] = false;
            }
        }
    }

    for (int p = 2; p <= n; p++){
        if (prime[p]){
            cout << p << " ";
            vec.push_back(p);
        }
    }
}
  
int main(){

    int n = 30;
    cout << "Following are the prime numbers smaller than or equal to " << n << endl;
    
    vector<int> primes;
    SieveOfEratosthenes(n,primes);

    return 0;
}