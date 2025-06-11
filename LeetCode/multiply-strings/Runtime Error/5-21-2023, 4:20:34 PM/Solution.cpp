// https://leetcode.com/problems/multiply-strings

class Solution {
public:
    string multiply(string num1, string num2) {
        return to_string(stoll(num1)*stoll(num2));
    }
};