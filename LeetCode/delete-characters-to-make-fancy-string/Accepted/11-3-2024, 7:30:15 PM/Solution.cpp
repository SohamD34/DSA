// https://leetcode.com/problems/delete-characters-to-make-fancy-string

class Solution {
public:
    string makeFancyString(string s) {
        
        if(s.length() < 3){
            return s;
        }

        string out = "";
        int len = 0;
        
        for(int i=0; i<s.length(); i++){
            if(i<2){
                out += s[i];
                len++;
            }
            else{
                if(s[i]==out[len-1] && s[i]==out[len-2]){
                    continue;
                }
                else{
                    out += s[i];
                    len++;
                }
            }
        }
        
        return out;
    }
};