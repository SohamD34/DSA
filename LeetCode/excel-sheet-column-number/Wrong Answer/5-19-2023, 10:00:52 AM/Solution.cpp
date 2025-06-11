// https://leetcode.com/problems/excel-sheet-column-number

class Solution {
public:
    int titleToNumber(string columnTitle) {
        unordered_map<char,int> Map;
        int j = 1;

        for(int i=int('A');i<=int('Z');i++){
            Map[char(i)] = j;
            j++;
        }

        return Map['A'];
    }
};