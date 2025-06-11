// https://leetcode.com/problems/multiply-strings

class Solution {
public:
    string multiply(string num1, string num2) {
        return str(eval(num1+'*'+num2))
    }
};