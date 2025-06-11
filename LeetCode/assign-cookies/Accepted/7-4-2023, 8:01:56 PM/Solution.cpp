// https://leetcode.com/problems/assign-cookies

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        
        int greed_ptr = 0;
        int cookie_ptr = 0;

        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        int count = 0;
        int backtrack = 0;

        while(greed_ptr != g.size() && cookie_ptr != s.size()){

            if(g[greed_ptr] <= s[cookie_ptr]){
                count += 1;
                cookie_ptr += 1;
                greed_ptr += 1;
            }
            else{
                cookie_ptr += 1;
            }
        }

        return count;
    }
};