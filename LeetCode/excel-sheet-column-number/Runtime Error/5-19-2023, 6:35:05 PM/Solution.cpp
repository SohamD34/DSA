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

        int num = 0;
        for(int i=columnTitle.size()-1; i>=0;i++){
            char letter = columnTitle[i];
            num += pow(26,(columnTitle.size()-i))*Map[letter];
        }
        return num;
    }
};