#include <iostream>
using namespace std;

string ones_compliment(string s){
    string ones = "";
    for(auto i:s){
        if(i=='0'){
            ones+='1';
        }
        else{
            ones+='0';
        }
    }
    return ones;
}

int main(){

    string a = "111";
    string b1 = "0111";

    int len_a = a.length();
    int len_b = b1.length();

    if(len_a > len_b){
        for(int p=0;p<(len_a-len_b);p++){
            b1 = "0" + b1;
        }
    }
    else{
        for(int p=0;p<len_b-len_a;p++){
            a = "0" + a;
        }
    }

    string b = ones_compliment(b1);

    string op = "";
    string carry = "0";

    for(int i=a.length()-1;i>=0;i--){

        if(a[i]==b[i]){
            if (carry == "0"){
                op = "0" + op;
                carry = a[i];
            }
            else{
                op = "1" + op;
                carry = a[i];
            }
        }
        else{
            if (carry == "0"){
                op = "1" + op;
                carry = "0";
            }
            else{
                op = "0" + op;
                carry = "1";
            }
        }
    }

    cout<<op<<endl;
    cout<<carry<<endl;

    if(carry=="1"){
        if(op[op.length()-1]=='0'){
            op[op.length()-1] = '1';
        }
        
        else{
            int x = op.length()-1;
            while(op[x] != '1'){
                op[x] = '0';
                x--;
            }
            op[x] = '1';
        }
    }
    else{
        op = "neg " + ones_compliment(op);
    }

    cout<<op<<endl;

    return 0;
}