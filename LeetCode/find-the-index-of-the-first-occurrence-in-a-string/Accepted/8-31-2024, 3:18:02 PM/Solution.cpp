// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string

class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int start_index = -1;

        if(haystack.length() < needle.length()){
            return start_index;
        }

        for(int i=0; i<haystack.length(); i++){

            if(haystack.substr(i, needle.length()) == needle){
                start_index = i;
                break;
            }

        }
        return start_index;
    }
};