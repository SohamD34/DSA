// https://leetcode.com/problems/decode-the-message

class Solution {
public:
    string decodeMessage(string key, string message) {
    
        vector<bool> flag(26,false);
        char map[26];
        int curAlp=97;

        for(int i=0;i<key.length();i++){
            if(key[i] != ' '){
                if(flag[key[i]-97] == false){
                    map[key[i]-97] = (char)curAlp;
                    flag[key[i]-97] = true;
                    curAlp++;
                }
            }
        }

        for(int j=0;j<message.length();j++){
            if(message[j] != ' '){
                message[j] = map[message[j]-97];
            }
        }

        return message;
    }
};
