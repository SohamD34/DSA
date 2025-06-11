// https://leetcode.com/problems/sqrtx

class Solution {
public:
    int mySqrt(int x) {
        int root1;
        for(int root = 0; root < x/2; root++){
            if (root*root > x){
                root1 = root-1;
                break;
            }
        }
        return root1 -1;
    }
};