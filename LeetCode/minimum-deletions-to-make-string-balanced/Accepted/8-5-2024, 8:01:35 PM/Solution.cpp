// https://leetcode.com/problems/minimum-deletions-to-make-string-balanced

class Solution {
public:
    int minimumDeletions(string s) {

        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(NULL);
        
        int cnt_b = 0;

        // find out how many b lie before a at a particular position.

        // if curr=='a' -- we might have to delete all 'a' after it -- so count_a to be deleted ++ 
        // else curr='b' -- delete them from beginning -- so count_b++;
        // at every step - greedy

        int ans = 0;

        for(char c: s){
            if(c == 'a'){
                ans += 1;
            }
            else{
                cnt_b += 1;
            }
            ans = min(ans, cnt_b);
        }
        return ans;
    }
};