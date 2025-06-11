// https://leetcode.com/problems/isomorphic-strings

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> M;

        for(int i=0;i<s.length();i++){
            char a = s[i];
            char b = t[i];

            auto it = M.find(a); 

            if(it==M.end()){
                M[a] = b;
            }
            else{
                if(M[a]==b){
                    continue;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};