// https://leetcode.com/problems/first-unique-character-in-a-string

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> M;

        for(auto i:s){
            if(M[i]){
                M[i] +=1;
            }
            else{
                M[i] = 1;
            }
        }

        for(int i=0; i<s.length(); i++){
            if(M[s[i]]==1){
                return i;
            }
        }

        return -1;
    }
};