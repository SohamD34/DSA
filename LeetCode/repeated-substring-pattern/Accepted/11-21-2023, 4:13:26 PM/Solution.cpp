// https://leetcode.com/problems/repeated-substring-pattern

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    bool repeatedSubstringPattern(string s) {
        
        string t=s+s;
        if(t.substr(1,t.size()-2).find(s)!=-1){
            return true;
        }
        return false;
    }
};