// https://leetcode.com/problems/n-th-tribonacci-number

class Solution {
public:
    int tribonacci(int n) {
        vector<int> trib = {0,1,1};

        for(int i=3; i<=n; i++){
            trib.push_back(trib[i-3] + trib[i-2] + trib[i-1]);
        }

        return trib[n];
    }
};