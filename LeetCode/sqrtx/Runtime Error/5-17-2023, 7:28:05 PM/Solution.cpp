// https://leetcode.com/problems/sqrtx

class Solution {
public:
    int mySqrt(int x) {
        int root;

        if(x==0 or x==1){
            return x;
        }

        for(int i=0; i<=x/2; i++){

            if(i*i == x){
                root = i;
                break;
            }
            else if (i*i > x){
                root = i-1;
                break;
            }
        }
        return root;
    }
};