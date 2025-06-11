// https://leetcode.com/problems/climbing-stairs

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
    }
    int climbStairs(int n) {

        if(n==1) return 1;
        if(n==2) return 2;

        int n1 = 1;
        int n2 = 2;
        int temp = 0;

        for(int i=0; i<n-2; i++){
            temp = n1 + n2;
            n1 = n2;
            n2 = temp;
        }
        return temp;
    }

    /*
    1,2,3,5,8,13,21
    */
};