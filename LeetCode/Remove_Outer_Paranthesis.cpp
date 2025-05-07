#include <iostream>
using namespace std;

/*
Example 1:

Input: s = "(()())(())"
Output: "()()()"
Explanation: 
The input string is "(()())(())", with primitive decomposition "(()())" + "(())".
After removing outer parentheses of each part, this is "()()" + "()" = "()()()".

*/


string removeOuterParentheses(string s) {
        
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

int main(){
    
    string s;
    cin>>s;

    cout << removeOuterParentheses(s) << endl; // Output: "()()()"
    return 0;

}