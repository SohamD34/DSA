// https://leetcode.com/problems/longest-substring-without-repeating-characters

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n = s.length();
        int max_len = 0;

        int lastIndex[128] = {0};
        int start = 0;

        for (int end = 0; end < n; end++) {

            char currentChar = s[end];
            start = max(start, lastIndex[currentChar]);
            max_len = max(max_len, end - start + 1);

            lastIndex[currentChar] = end + 1;
        }

        return max_len;
    }
};