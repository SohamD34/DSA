// https://leetcode.com/problems/reverse-string

class Solution {
public:
    void reverseString(vector<char>& s) {
        char front;
        for(int i=0; i<s.size()/2; i++){
            front = s[i];
            s[i] = s[s.size() - i -1];
            s[s.size() - i -1] = front;
        }
    }
};