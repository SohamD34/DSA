#include <bits/stdc++.h>
using namespace std;


string multiply(string num1, string num2) {

    if(num1 == "0" or num2 == "0"){
        return "0";
    }

    int l1 = num1.length();
    int l2 = num2.length();

    string ans = "";
    vector<string> all_products;

    for(int i=l2-1; i>=0; i--){

        int carry = 0;
        string product = "";
        int digit2 = num2[i] - '0';

        for(int j=l1-1; j>=0; j--){
            int digit1 = num1[j] - '0';
            int prod = digit1 * digit2 + carry;
            carry = prod / 10;
            product += (prod % 10) + '0';
        }

        if(carry > 0){
            product += carry + '0';
        }

        reverse(product.begin(), product.end());
        
        for(int k=0; k<l2-1-i; k++){
            product += '0';
        }

        all_products.push_back(product);
    }

    // Now sum all the products
    int max_length = 0;
    for(auto prod : all_products){
        max_length = max(max_length, (int)prod.length());
    }
    
    vector<int> sum(max_length, 0);
    int carry;

    for(auto prod : all_products){
        carry = 0;
        int k = max_length - 1;

        for(int j=prod.length()-1; j>=0; j--, k--){
            sum[k] += (prod[j] - '0') + carry;
            carry = sum[k] / 10;
            sum[k] %= 10;
        }
        while(carry > 0 && k >= 0){
            sum[k] += carry;
            carry = sum[k] / 10;
            sum[k] %= 10;
            k--;
        }
    }

    if (carry > 0) {
        sum.insert(sum.begin(), carry);
    }

    // Convert the sum vector to a string
    ans = "";
    for(int digit : sum){
        ans += (digit + '0');
    }
        

    return ans;
}


int main(){

    // string num1 = "2";
    // string num2 = "3";
    // cout<<multiply(num1, num2)<<endl;

    string num1 = "123";
    string num2 = "456";
    cout<<multiply(num1, num2)<<endl;

    num1 = "1000";
    num2 = "1001";
    cout<<multiply(num1, num2)<<endl;

    num1 = "140";
    num2 = "721";
    cout<<multiply(num1, num2)<<endl;

    return 0;
}