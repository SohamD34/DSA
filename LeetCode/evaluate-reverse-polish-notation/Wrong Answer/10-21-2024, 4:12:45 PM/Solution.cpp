// https://leetcode.com/problems/evaluate-reverse-polish-notation

class Solution {
public:
    int str_to_int(string num){

        int val = 0;
        for(auto i:num){
            val = val*10 + (i - '0');
        }
        return val;
    }
        
    int evalRPN(vector<string>& tokens) {
        
        stack<int> S;

        for(auto i:tokens){

            if(S.empty()){
                S.push(str_to_int(i));
            }
            else{
                if(i=="+" or i=="-" or i=="*" or i=="/"){
                
                    int num1 = S.top();
                    S.pop();

                    int num2 = S.top();
                    S.pop();

                    if(i=="+"){
                        S.push(num1 + num2);
                    }
                    else if(i=="-"){
                        S.push(num2 - num1);
                    }
                    else if(i=="*"){
                        S.push(num1*num2);
                    }
                    else{
                        S.push(num2/num1);
                    }
                }
                else{
                    S.push(str_to_int(i));
                }
            }
        }

        return S.top();
    }
};