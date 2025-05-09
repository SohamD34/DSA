#include <iostream>
#include <vector>
#include <string>
using namespace std;

void tryCombinations(int open, int close, vector<string>& res, string str){
        if (open == 0 && close == 0){
            // all brackets completed
            res.push_back(str);
            return;
        }
        if (open > 0){
            // create new open brackets
            tryCombinations(open - 1, close, res, str + "(");
        }
        if (close > 0 && close > open){
            // we need to close all open brackets -- now if open == close -- it will again create more open.
            tryCombinations(open, close - 1, res, str + ")");
        }
    }

vector<string> generateParenthesis(int n){

    vector<string>  res;
    tryCombinations(n, n, res, "");
    return res;
}