// https://leetcode.com/problems/word-pattern

class Solution {
public:
    vector<string> split(string s){
        vector<string>words;
        string word = "";
        for(auto i:s){
            if(i==' '){
                words.push_back(word);
                word = "";
            }
            else{
                word += i;
            }
        }
        if(word != " " or word !=""){
            words.push_back(word);
        }
        return words;
    }

    bool wordPattern(string pattern, string s) {

        unordered_map<char, string> M;
        vector<string> v = split(s);
        bool val = true;

        for(int i=0; i<pattern.length(); i++){

            if (M.count(pattern[i]) == 0){
                M[pattern[i]] = v[i];
            }
            else{
                if(M[pattern[i]] == v[i]){
                    val = true;
                }
                else{
                    val = false;
                    break;
                }
            }
        }
        return val;
    }
};