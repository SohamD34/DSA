#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << ' ';
    }
    cout << endl;
}

/*     NAIVE SOLUTION - recursive dfs - O(k*M) --- TLE     */

// double dfs(int score, int n, int k, int maxPts, unordered_map<double, double> &cache){

//     if(score >= k){
//         if(score <= n){
//             return 1;
//         }
//         else{
//             return 0;
//         }
//     }

//     if(cache[score]){
//         return cache[score];
//     }

//     double prob = 0;

//     for(int i=1; i<=maxPts; i++){
//         prob += dfs(score+i, n, k, maxPts, cache);
//     }

//     cache[score] = prob/maxPts;
//     return cache[score];
// }

// double new21Game(int n, int k, int maxPts){

//     unordered_map<double, double> cache;
//     double ans = dfs(0, n, k, maxPts, cache);

//     return round(ans*100000)/100000;
// }



/*     OPTIMISED USING DP --- O(k + M)    */


double new21Game(int n, int k, int maxPts){

    if(k == 0){
        return 1.0;
    }

    // maintain a window of size maxPts

    double windowSum = min(maxPts, n-k+1);

    unordered_map<double, double> dp;

    for(int i=k-1; i>=0; i--){
        dp[i] = windowSum / maxPts;

        // we are moving the window from right to left
        // now we need to remove the values at the right end of the window
        // i.e. any values between (n, i+maxPts)

        double remove = 0;

        if(i+maxPts <= n){
            if(dp[i+maxPts]){
                remove = dp[i+maxPts];
            }
            else{
                remove = 1;
            }
        }

        windowSum += dp[i] - remove;
    }

    return round(dp[0] * pow(10, 5)) / pow(10, 5);
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int  n, k, maxPts;

    // test 1
    n = 10;
    k = 1;
    maxPts = 10;
    cout << new21Game(n, k, maxPts) <<endl;

    // test 2
    n = 6;
    k = 1;
    maxPts = 10;
    cout << new21Game(n, k, maxPts) <<endl;

    // test 3
    n = 21;
    k = 17;
    maxPts = 10;
    cout << new21Game(n, k, maxPts) <<endl;


    /*
    Expected answers
    1.000
    0.600
    0.73278
    */

    return 0;
}