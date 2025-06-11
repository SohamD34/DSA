// https://leetcode.com/problems/reverse-prefix-of-word

class Solution {
public:
    string reversePrefix(string word, char ch) {
        
        int start = 0;
        string reversed = "";

        int i=0;

        while(word[i] != ch && i<word.length()){
            reversed = word[i] + reversed;
            i++;
        }

        if(word[i] == ch){
            reversed = word[i] + reversed;
            for(int j=i+1; j<word.length(); j++){
                reversed += word[j];
            }
            cout<<reversed<<endl;
            return reversed;
        }
        
        return word;
    }
};