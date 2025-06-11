// https://leetcode.com/problems/multiply-strings

class Solution {
public:
    string multiply(string num1, string num2) {
        long long int n1 = stoll(num1);
        long long int n2 = stoll(num2);
        return to_string(n1*n2);
    }
};