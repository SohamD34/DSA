#include <bits/stdc++.h>
#include <vector>
using namespace std;

string numberToWords(int num){

    vector<string> below_20 = {
            "Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
            "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen",
            "Eighteen", "Nineteen"
    };

    vector<string> tens = {
            "Zero", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"
    };

    vector<string> thousands = {
            "", "Thousand", "Million", "Billion"
    };

    
    if (num == 0){
        return "Zero";
    }

    string result = "";
    int billions = num / 1000000000;
    num %= 1000000000;
    int millions = num / 1000000;
    num %= 1000000;
    int thousandsPlace = num / 1000;
    num %= 1000;
    int hundreds = num / 100;
    num %= 100;
    int tensPlace = num / 10;
    num %= 10;
    int belowTwenty = num;

    if (billions > 0) {
        result += numberToWords(billions) + " Billion";
    }
    if (millions > 0) {
        if (!result.empty()){
            result += " ";
        }
        result += numberToWords(millions) + " Million";
    }
    if (thousandsPlace > 0) {
        if (!result.empty()){
            result += " ";
        }
        result += numberToWords(thousandsPlace) + " Thousand";
    }
    if (hundreds > 0) {
        if (!result.empty()){
            result += " ";
        }
        result += below_20[hundreds] + " Hundred";
    }
    if (tensPlace > 1) {
        if (!result.empty()){
            result += " ";
        }
        result += tens[tensPlace];
        if (belowTwenty > 0){
            result += " " + below_20[belowTwenty];
        }
    }
    else if (tensPlace == 1){
        if (!result.empty()){
            result += " ";
        }
        result += below_20[tensPlace * 10 + belowTwenty];
    }
    else if (belowTwenty > 0){
        if (!result.empty()){
            result += " ";
        }
        result += below_20[belowTwenty];
    }
    if (result.empty()) {
        return "Zero";
    }
    return result;
}

int main(){
    int num = 123;
    cout << numberToWords(num) << endl;

    num = 12345;
    cout << numberToWords(num) << endl;

    num = 1234567;
    cout << numberToWords(num) << endl;

    num = 1234567891;
    cout << numberToWords(num) << endl;

    return 0;
}