// https://leetcode.com/problems/valid-parentheses

class Solution {
public:
    bool isValid(string s) {
        stack<char> S1;
        bool valid = true;

        S1.push(s[0]);

        for (int i=1;i<s.length();i++){

            char prev_top = S1.top();
            S1.push(s[i]);
            if(S1.top()==')' && prev_top=='('){
                valid = true;
                S1.pop();
                S1.pop();
            }
            else if(S1.top()=='}' && prev_top=='{'){
                valid = true;
                S1.pop();
                S1.pop();
            }
            else if(S1.top()==']' && prev_top=='['){
                valid = true;
                S1.pop();
                S1.pop();
            }
            return S1.empty();
        }
    }
};