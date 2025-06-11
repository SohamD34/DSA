// https://leetcode.com/problems/string-compression

class Solution {
public:
    int compress(vector<char>& chars) {
        
        map<char, int> M;
        for(auto i:chars){
            if(M[i]){
                M[i] += 1;
            }
            else{
                M[i] = 1;
            }
        }
        chars.clear();

        for(auto pair:M){
            cout<<pair.first<<" "<<pair.second<<endl;
            chars.push_back(pair.first);

            if(pair.second > 1){
                string count = to_string(pair.second);
                for(auto i:count){
                    chars.push_back(i);
                }
            }
            
        }
        return chars.size();
    }
};