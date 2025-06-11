// https://leetcode.com/problems/fair-distribution-of-cookies

class Solution {
public:
    int distributeCookies(vector<int>& cookies, int k) {
        
        int sum = 0;
        for(auto i:cookies){
            sum += i;
        }

        int min_unfairness = sum/k;
        int rem = sum%k;

        if(rem != 0){
            return min_unfairness + 1;
        }
        return min_unfairness;
    }
};