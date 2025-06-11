// https://leetcode.com/problems/isomorphic-strings

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> M;

        for(int i=0;i<s.length();i++){
            char a = s[i];
            char b = t[i];

            if(M.find(a) == M.end()){
                M[a] = b;
            }
        }

        for(int i=0; i<s.length(); i++){
            s[i] = M[s[i]];
        }

        return s==t;
    }
};