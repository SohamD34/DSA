// https://leetcode.com/problems/reverse-vowels-of-a-string

class Solution {
public:
    string reverseVowels(string s) {
        
        stack<char> S;

        for(auto i: s){
            if(i=='a' or i=='e' or i=='o' or i=='i' or i=='u' or i=='A' or i=='E' or i=='O' or i=='I' or i=='U'){
                S.push(i);
            }
        }

        for(int i=0; i<s.length(); i++){
            if(s[i]=='a' or s[i]=='e' or s[i]=='o' or s[i]=='i' or s[i]=='u' or s[i]=='A' or s[i]=='E' or s[i]=='O' or s[i]=='I' or s[i]=='U'){
                s[i] = S.top();
                S.pop();
            }
        }

        return s;
    }
};