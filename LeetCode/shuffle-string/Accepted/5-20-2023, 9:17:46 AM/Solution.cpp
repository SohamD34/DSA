// https://leetcode.com/problems/shuffle-string

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        
        unordered_map<int,char> Map;
        for(int i=0; i<s.length(); i++){
            Map[indices[i]] = s[i];
        }

        for(int i=0; i<s.length(); i++){
            s[i] = Map[i];
        }

        return s;
    }
};