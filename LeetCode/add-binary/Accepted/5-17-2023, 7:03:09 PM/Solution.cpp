// https://leetcode.com/problems/add-binary

class Solution {
public:
    string addBinary(string a, string b) {
        
    int len_a = a.length();
    int len_b = b.length();

    if(len_a > len_b){
        for(int p=0;p<(len_a-len_b);p++){
            b = "0" + b;
        }
    }
    else{
        for(int p=0;p<len_b-len_a;p++){
            a = "0" + a;
        }
    }

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

    if (carry == "1"){
        op = "1" + op;
    }
    return op;
    }
};