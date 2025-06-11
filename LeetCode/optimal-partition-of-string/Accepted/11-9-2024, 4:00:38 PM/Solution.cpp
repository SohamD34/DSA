// https://leetcode.com/problems/optimal-partition-of-string

class Solution {
public:
    int partitionString(string s) {
        
        int n = s.length();
        int count = 0;
        string curr_string = "";

        int count_chars[26] = {0};

        for(int i=0; i<n; i++){
            if(count_chars[s[i] - 'a'] == 1){
                count += 1;

                for(int j=0; j<26; j++){
                    count_chars[j] = 0;
                }

                curr_string = "";
                curr_string += s[i];
                count_chars[s[i] - 'a'] = 1;
            }
            else{
                curr_string += s[i];
                count_chars[s[i] - 'a'] = 1;
            }
        }

        if(curr_string.length() > 0){
            count++;
        }
        return count;
    }
};