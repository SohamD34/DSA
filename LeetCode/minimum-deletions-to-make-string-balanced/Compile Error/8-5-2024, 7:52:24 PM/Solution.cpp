// https://leetcode.com/problems/minimum-deletions-to-make-string-balanced

class Solution {
public:
    int minimumDeletions(string s) {
        
        int cnt_b = 0;
        int ans = 0;

        for(char c: s){
            if(c == 'a'){
                ans += 1;
            }
            else{
                cnt_b += 1;
            }
            ans = min(ans, cnt_b));
        }
        return ans;
    }
};