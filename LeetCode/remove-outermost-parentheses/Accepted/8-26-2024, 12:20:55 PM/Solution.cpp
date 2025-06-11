// https://leetcode.com/problems/remove-outermost-parentheses

class Solution {
public:
    string removeOuterParentheses(string s) {

        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
            
        int count_of_open = 0;
        string ans = "";
        string substring = "";

        for(auto i:s){
            if(i=='('){
                count_of_open++;
                substring += i;
            }
            else if(i==')'){
                count_of_open--;

                if(count_of_open != 0){
                    substring += i;
                }
                else{
                    ans += substring.substr(1, substring.size()-1);
                    substring = "";
                }
            }
        }
        return ans;
    }
};