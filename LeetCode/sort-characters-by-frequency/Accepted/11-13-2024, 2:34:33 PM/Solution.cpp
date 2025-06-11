// https://leetcode.com/problems/sort-characters-by-frequency

#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    string frequencySort(string s) {

        vector<pair<int, char>> count_chars;

        for(int i=0; i<26; i++){
            char c = 'a'+i;
            count_chars.push_back({0, c});
        }
        for(int i=0; i<26; i++){
            char c = 'A'+i;
            count_chars.push_back({0, c});
        }
        for(int i=0; i<10; i++){
            char c = '0'+i;
            count_chars.push_back({0, c});
        }

        /* lowercase (a-z) - 0 to 25
            uppercase (A-Z) - 26 to 51
            digits (0 to 9) - 52 to 61
        */

        for(auto i:s){
            if('0'<=i && i<='9'){
                count_chars[i - '0' + 52].first++;
            }
            else if('a'<=i && i<='z'){
                count_chars[i - 'a'].first++;
            }
            else{
                count_chars[i - 'A' + 26].first++;
            }
        }

        sort(count_chars.begin(), count_chars.end());

        int index = 0;

        for(int i=61; i>=0; i--){

            pair<int, char> p = count_chars[i];

            while(p.first){
                s[index] = p.second;
                index++;
                p.first--;
            }
        }

        return s;
    }
};