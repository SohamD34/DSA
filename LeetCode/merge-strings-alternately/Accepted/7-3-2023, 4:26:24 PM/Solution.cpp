// https://leetcode.com/problems/merge-strings-alternately

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        string ans = "";
        int n1 = word1.length();
        int n2 = word2.length();

        for(int i=0; i<min(n1, n2); i++){
            ans+= word1[i];
            ans+= word2[i];
        }

        if(n1>n2){
            for(int i=n2; i<n1; i++){
                ans+= word1[i];
            }
        }
        else{
            for(int i=n1; i<n2; i++){
                ans+= word2[i];
            }
        }

        return ans;
    }
};