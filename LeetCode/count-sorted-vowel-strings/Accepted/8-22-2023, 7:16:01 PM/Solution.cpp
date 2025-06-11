// https://leetcode.com/problems/count-sorted-vowel-strings

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    int countVowelStrings(int n) {
        
        return ((n+1)*(n+2)*(n+3)*(n+4))/24;
    }
};