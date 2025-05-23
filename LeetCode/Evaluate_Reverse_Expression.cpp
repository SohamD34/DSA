#include<iostream>
#include<string>
#include<stack>
#include<vector>
using namespace std;

void PrintStack(stack<int> s){
    stack<int> temp;
    while (s.empty() == false){
        temp.push(s.top());
        s.pop();
    }   
 
    while (temp.empty() == false){
        int t = temp.top();
        cout << t << " ";
        temp.pop();

        s.push(t);  
    }
    cout<<endl;
}


int str_to_int(string num){

    int val = 0;
    int n = num.length();

    if(num[0] != '-'){
        for(int i=0; i<n; i++){
            val = val*10 + (num[i] - '0');
        }
    }
    else{
        for(int i=1; i<n; i++){
            val = val*10 + (num[i] - '0');
        }
        val *= -1;
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

int main(){

    // vector<string> v = {"2","1","+","3","*"};
    // vector<string> v = {"4","13","5","/","+"};
    // vector<string> v = {"10","6","9","3","+","-11","*","/","*","17","+","5","+"};
    vector<string> v = {"3","-4","+"};

    cout<<evalRPN(v)<<endl;

    return 0;
}