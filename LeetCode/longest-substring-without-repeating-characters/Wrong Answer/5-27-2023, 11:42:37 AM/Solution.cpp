// https://leetcode.com/problems/longest-substring-without-repeating-characters

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector<char> visited;
        int max_length = 0;
        int length = 0;

        if(s.length()==1){
            max_length = 1;
        }

        for(int i=0; i<s.length(); i++){

            if(find(visited.begin(),visited.end(),s[i]) == visited.end()){
                length += 1;
                visited.push_back(s[i]);
            }
            else{
                if(max_length <= length){
                    max_length = length;
                }
                visited.clear();
                length = 0;
                visited.push_back(s[i]);
                length+=1;
            }
        }

        return max_length;
    }
};