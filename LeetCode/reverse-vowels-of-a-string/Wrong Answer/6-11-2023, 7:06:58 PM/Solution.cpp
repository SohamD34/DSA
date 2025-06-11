// https://leetcode.com/problems/reverse-vowels-of-a-string

class Solution {
public:
    string reverseVowels(string s) {
        
        stack<char> S;

        for(auto i: s){
            if(i=='a' or i=='e' or i=='o' or i=='i' or i=='u'){
                S.push(i);
            }
        }

        for(int i=0; i<s.length(); i++){
            if(s[i]=='a' or s[i]=='e' or s[i]=='o' or s[i]=='i' or s[i]=='u'){
                s[i] = S.top();
                S.pop();
            }
        }

        return s;
    }
};