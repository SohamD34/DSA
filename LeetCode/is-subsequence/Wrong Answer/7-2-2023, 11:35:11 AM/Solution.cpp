// https://leetcode.com/problems/is-subsequence

class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int check_ptr = 0; // for t
        int curr_ptr = 0;  // for s
        bool found;
        int start_check = 0;

        for(auto chr:s){
            found = false;
            for(int i=start_check; i<t.length(); i++){
                
                if(t[i] == chr){
                    if(i!=t.length()-1){start_check = i+1;}
                    found = true;
                    break;
                }
            }

            if(!found){
                break;
            }
        }

        return found;
    }
};