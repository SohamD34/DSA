// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string

class Solution {
public:
    int strStr(string haystack, string needle) {
        int indx = 0;
        int valid = 0;

        for(int i=0;i<haystack.length();i++){

            if(needle[0]==haystack[i]){
                valid = 1;
                indx = i;
                string sub = haystack.substr(i,needle.length());
                if(sub == needle){
                    return i;
                }
            }
        }
        return -1;
    }
};