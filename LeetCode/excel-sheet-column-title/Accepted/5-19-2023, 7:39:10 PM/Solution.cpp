// https://leetcode.com/problems/excel-sheet-column-title

class Solution {
public:
    string convertToTitle(int columnNumber) {

        string op;

        while(columnNumber > 0){
            columnNumber -=1 ;
            op = char(columnNumber%26 + 65) + op;
            columnNumber = columnNumber/26;
        }

        return op;
    }
};