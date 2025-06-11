// https://leetcode.com/problems/parsing-a-boolean-expression

class Solution {
public:
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
        }
        
        return S.top() == 't' ? true : false;
    }
};