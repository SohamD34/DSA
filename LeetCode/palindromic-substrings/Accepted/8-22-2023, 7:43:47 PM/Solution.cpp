// https://leetcode.com/problems/palindromic-substrings

class Solution {
public:
    int countSubstrings(string s) {
        
        int n = s.length();
        int count = 0;
        
        for(int i=0; i<n; i++){

            // check for odd length palindromes 

            int l = i;
            int r = i;

            while(l>=0 && r<=n-1 && s[l]==s[r]){
                count +=1;
                l--;
                r++;
            }

            // checking for even length palindromes

            l = i;
            r = i+1;
            
            while(l>=0 && r<=n-1 && s[l]==s[r]){
                count +=1;
                l--;
                r++;
            }
        }

        return count;
    }
};