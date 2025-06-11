// https://leetcode.com/problems/score-of-a-string

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    int scoreOfString(string s) {
        
        int sum = 0;
        for(int i=0; i<s.length()-1; i++){
            sum += abs(int(s[i] - s[i+1]));
        }
        return  sum;
    }
};