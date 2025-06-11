// https://leetcode.com/problems/di-string-match

class Solution {
public:
    vector<int> diStringMatch(string s) {

        vector<int> res;
        int i = 0;
        int j = s.size();

        for (char c: s){
            res.push_back(c == 'I' ? i++ : j--);
        }
        res.push_back(j);
        return res;
    }
};