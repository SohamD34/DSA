#include <iostream>
using namespace std;

string longestPalindrome(string s) {
        
    int n = s.length();
    int start = 0, end = 1;
    int low, hi;

    for (int i = 0; i < n; i++) {

        low = i - 1;
        hi = i;

        while (low >= 0 && hi < n && s[low] == s[hi]) {

            if (hi - low + 1 > end) {
                start = low;
                end = hi - low + 1;
            }
            low--;
            hi++;
        }

        low = i - 1;
        hi = i + 1;

        while (low >= 0 && hi < n && s[low] == s[hi]) {

            if (hi - low + 1 > end) {
                start = low;
                end = hi - low + 1;
            }
            low--;
            hi++;
        }
    }

    string op = "";
    for (int i = start; i < start+end; ++i){
        op += s[i];
    }
    return op;
}

int main(){
    string s = "abachedvdvd";

    cout << longestPalindrome(s) << endl;
}