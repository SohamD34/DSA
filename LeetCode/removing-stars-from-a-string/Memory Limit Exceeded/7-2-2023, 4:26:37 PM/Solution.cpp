// https://leetcode.com/problems/removing-stars-from-a-string

class Solution {
public:
    string removeStars(string s) {
        
        stack<char> S;

        for(auto i:s){
            if(i=='*'){
                S.pop();
            }
            else{
                S.push(i);
            }
        }

        string op = "";
        while(!S.empty()){
            op = S.top() + op;
            S.pop();
        }

        return op;
    }
};