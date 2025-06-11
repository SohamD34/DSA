// https://leetcode.com/problems/merge-strings-alternately

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        int curr_indx = 0;
        string ans = "";

        while(curr_indx<word1.length() or curr_indx<word2.length()){
            if(curr_indx<word1.length()){
                ans+=word1[curr_indx];
            }
            if(curr_indx<word2.length()){
                ans+=word2[curr_indx];
            }
            curr_indx += 1;
        }

        return ans;
    }
};