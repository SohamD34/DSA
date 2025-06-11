// https://leetcode.com/problems/word-break

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        
        string curr_check = "";

        for(auto i:s){
            curr_check += i;
            
            if(find(wordDict.begin(), wordDict.end(),curr_check) != wordDict.end()){
                curr_check = "";
            }
        }

        if(curr_check != ""){
            return false;
        }
        return true;
    }
};