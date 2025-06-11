// https://leetcode.com/problems/is-subsequence

class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        bool found;
        int start_check = 0;

        for(auto chr:s){
            found = false;

            for(int i=start_check; i<t.length(); i++){
                if(t[i] == chr){
                    found = true;
                    start_check = i+1;
                    break;
                }
            }

            if(found == false){
                break;
            }
        }

        return found;
    }
};