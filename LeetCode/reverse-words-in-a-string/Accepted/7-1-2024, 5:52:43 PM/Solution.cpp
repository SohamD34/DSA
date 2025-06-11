// https://leetcode.com/problems/reverse-words-in-a-string

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
    }
    string reverseWords(string s) {

        string word = "";
        vector<string> words;

        for(int i=0; i<s.length(); i++){

            if(s[i] != ' '){
                word += s[i];
            }
            else{
                if (word != ""){
                    words.push_back(word);
                    word = "";
                }
            }
        }
        
        if(word!=""){
            words.push_back(word);
        }

        string op;

        for(int i=words.size()-1; i>=0; i--){

            if(i!=0){
                op += (words[i] + " ");
            }
            else{
                op += words[i];
            }
        }

        cout<<op<<endl;

        return op;
    }
};