// https://leetcode.com/problems/length-of-last-word

class Solution {
public:
    int lengthOfLastWord(string s) {
        string last_word;

        for(int i=s.size()-1;i>=0;i--){
            if (s[i] != ' '){
                last_word = s[i] + last_word;
            }
            else{
                break;
            }
        }
        return last_word.size();
    }
};