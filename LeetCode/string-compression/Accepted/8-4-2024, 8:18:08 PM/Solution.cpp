// https://leetcode.com/problems/string-compression

class Solution {
public:
    int compress(vector<char>& chars) {
        
        char current = chars[0];
        int n = chars.size();
        int curr_count = 0;

        vector<char> v;

        for(int i=0; i<n; i++){
            if(chars[i] == current){
                curr_count += 1;
            }
            else{
                v.push_back(current);
                if(curr_count > 1){
                    string count = to_string(curr_count);
                    for(auto c:count){
                        v.push_back(c);
                    }
                }
                curr_count = 1;
                current = chars[i];
            }
        }
        v.push_back(current);

        if(curr_count > 1){
            string count = to_string(curr_count);
            for(auto c:count){
                v.push_back(c);
            }
        }

        chars.clear();

        for(auto i:v){
            chars.push_back(i);
        }
        
        return v.size();
    }
};