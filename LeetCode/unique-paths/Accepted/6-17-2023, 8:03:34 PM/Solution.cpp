// https://leetcode.com/problems/unique-paths

class Solution {
public:
    int uniquePaths(int m, int n) {

        int N = n+m-2;
        int R = min(n-1,m-1);
        double result = 1;

        for(int i = 0; i < min(n-1,m-1); i++){
            result = result * N-- / R--;
        }
        return round(result);
    }
};