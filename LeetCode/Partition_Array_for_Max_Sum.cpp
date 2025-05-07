#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/* 
1043. Partition Array for Maximum Sum

Given an integer array arr, partition the array into (contiguous) subarrays of length at most k.
After partitioning, each subarray has their values changed to become the maximum value of that subarray.
Return the largest sum of the given array after partitioning. Test cases are generated so that the answer fits in a 32-bit integer.

Example 1:

Input: arr = [1,15,7,9,2,5,10], k = 3
Output: 84
Explanation: arr becomes [15,15,15,9,10,10,10]
Example 2:

Input: arr = [1,4,1,5,7,3,6,1,9,9,3], k = 4
Output: 83
Example 3:

Input: arr = [1], k = 1
Output: 1
*/

'''
Logic - 
Subarray                Max value in subarray                   Replacedsubarray                Sum
[1]                             1                                    [1]                         1
[1,15]                         15                                    [15,15]                     30
[1,15,7]                       15                                   [15,15,15]                   45
Now max_len k=3 --> so now new subarray
[1,15,7],[9]                   9                                    [15,15,15],[9]               54


'''

int maxSumAfterPartitioning(vector<int> &arr, int k)
{

    int n = arr.size();
    vector<int> dp(n, 0);

    for (int i = 0; i < n; i++)
    {
        int max_val = 0;

        for (int j = 1; j <= min(i + 1, k); j++)
        {

            max_val = max(max_val, arr[i - j + 1]);
            dp[i] = max(dp[i], (i >= j ? dp[i - j] : 0) + max_val * j);
        }
    }
    return dp[n - 1];
}

int main()
{

    vector<int> arr = {1, 15, 7, 9, 2, 5, 10};
    int k = 3;
    int n = arr.size();
    vector<int> dp(n, 0);

    for (int i = 0; i < n; i++)
    {
        int max_val = 0;

        for (int j = 1; j <= min(k, i+1); j++)
        {
            max_val = max(max_val, arr[i - j + 1]);
            dp[i] = max(dp[i], (i >= j ? dp[i - j] : 0) + max_val * j);
        }
    }
    cout << dp[n - 1] << endl;

    return 0;
}