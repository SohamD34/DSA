// https://leetcode.com/problems/longest-substring-without-repeating-characters

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int max_length = 0;

        for(int i=0; i<s.length(); i++){

            int len = 0;
            unordered_map<char,int> M;

            for(int j=i; j<s.length(); j++){
                if(M[s[j]]){
                    break;
                }
                else{
                    len += 1;
                    M[s[j]] = 1;
                }
            }

            max_length = (max_length > len)?max_length:len;
        }

        return max_length;
    }
};