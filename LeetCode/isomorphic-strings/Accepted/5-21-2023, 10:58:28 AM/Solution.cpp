// https://leetcode.com/problems/isomorphic-strings

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> M;
        map<char,char> M2;

        for(int i=0;i<s.length();i++){
            char a = s[i];
            char b = t[i];

            auto it = M.find(a);
            auto it2 = M2.find(b);

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
            if(it2==M2.end()){
                M2[b] = a;
            }
            else{
                if(M2[b]==a){
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