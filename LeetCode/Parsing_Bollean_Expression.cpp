#include<iostream>
#include<string>
#include<stack>
#include<vector>
using namespace std;

void PrintStack(stack<char> s){
    stack<char> temp;
    while (s.empty() == false){
        temp.push(s.top());
        s.pop();
    }   
 
    while (temp.empty() == false){
        char t = temp.top();
        cout << t << " ";
        temp.pop();

        s.push(t);  
    }
    cout<<endl;
}


bool parseBoolExpr(string expression) {
    
    stack<char> S;  
    
    for (char c: expression) {

        if (c != ')' && c != ','){
            S.push(c);
        }
        else if (c == ')') {  
            vector<bool> exp;  
        
            while (!S.empty() && S.top() != '(') {
                char t = S.top(); 
                S.pop();
                if (t == 't'){
                    exp.push_back(true);
                }
                else{
                    exp.push_back(false);
                }
            }
            
            S.pop();  
            
            if (!S.empty()){
                
                char t = S.top(); 
                S.pop();
                bool v = exp[0];  
                
                if(t == '&'){  
                    for (bool b: exp){
                        v &= b;
                    }
                } 
                else if(t == '|'){ 
                    for (bool b: exp){
                        v |= b;
                    }
                }
                else{
                    v = !v;
                }
                
                if (v){
                    S.push('t');
                }
                else{
                    S.push('f');
                }
            }
        }

        PrintStack(S);
    }
    
    return S.top() == 't' ? true : false;
}


int main(){

    string exp = "&(&(t,|(t,f)))";
    cout<<parseBoolExpr(exp)<<endl;

    return 0;
}