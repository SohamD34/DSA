// https://leetcode.com/problems/permutation-in-string

class Solution {
public:
    string sortString(string &str){

        int charCount[26] = {0};
        string out = "";

        for (int i=0; i<str.length(); i++){
            charCount[str[i]-'a']++;  
        }

        for (int i=0;i<26;i++){
            for (int j=0;j<charCount[i];j++){
                out+= (char)('a'+i);
            }
        }

        return out;
    }

    bool checkInclusion(string s1, string s2) {

        if(s1.length() > s2.length()){
            return false;
        }
        
        int start_w = 0;
        int end_w = s1.length()-1;

        while(end_w != s2.length()){
            
            string substr = s2.substr(start_w, end_w-start_w+1);
            cout<<start_w<<" "<<end_w<<" "<<substr<<endl;

            if(sortString(substr) == sortString(s1)){
                return true;
            }

            start_w ++;
            end_w ++;
        }

        return false;
    }
};