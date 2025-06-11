// https://leetcode.com/problems/palindromic-substrings

class Solution {
public:
    int countSubstrings(string s) {
        
        int n = s.length();
        int count = 0;
        int start = 0;
        int end = 1;

        int low = 0;int high = 0;

        for(int i=0; i<n; i++){
            low = i-1;
            high = i;

            while(low<=high && s[low]==s[high]){

                if (high - low + 1 > end) {
                    start = low;
                    end = high - low + 1;
                }

                low--;
                high++;
            }
            count += 1;

            low = i - 1;
            high = i + 1;
    
            while (low >= 0 && high < n && s[low] == s[high]) {
    
                if (high - low + 1 > end) {
                    start = low;
                    end = high - low + 1;
                }
                low--;
                high++;
            }
        }

        return count;
    }
};