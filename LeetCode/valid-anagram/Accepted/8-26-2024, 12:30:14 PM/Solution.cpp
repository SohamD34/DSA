// https://leetcode.com/problems/valid-anagram

class Solution {
public:
    bool isAnagram(string s, string t) {

        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if(s == t){
            return true;
        }
        return false;
    }
};