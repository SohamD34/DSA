// https://leetcode.com/problems/multiply-strings

class Solution {
public:
    string multiply(string num1, string num2) {
        return to_string(stoull(num1)*stoull(num2));
    }
};