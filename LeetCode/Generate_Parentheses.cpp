#include <bits/stdc++.h>
using namespace std;

void print(vector<string> &v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << ' ';
    }
    cout << endl;
}

void parantheses(vector<string>& ans, vector<string>& stack, int n, int open, int close){

    // we can only add ) if close < open
    // but we can add ( any time till open < n
    // stop when open = close = n

    if(open == close && open == n){
        string temp = "";
        for(auto i:stack){
            temp += i;
        }
        ans.push_back(temp);
    }

    if(open < n){
        stack.push_back("(");
        parantheses(ans, stack, n, open+1, close);
        stack.pop_back();
    }

    if(close < open){
        stack.push_back(")");
        parantheses(ans, stack, n, open, close+1);
        stack.pop_back();
    }
}

vector<string> generateParenthesis(int n) {

    vector<string> ans;
    vector<string> stack;
    int open = 0;
    int close = 0;

    parantheses(ans, stack, n, open, close);
    return ans;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<string> out = generateParenthesis(5);
    print(out);

    return 0;
}