// https://leetcode.com/problems/permutation-in-string

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }

    bool check_permutation(string substr, string s1){

        int freq[26] = {0};

        for(auto i:substr){
            freq[i-'a']++;
        }
        for(auto j:s1){
            freq[j-'a']--;
        }
        for(int i=0; i<26; i++){
            if(freq[i] != 0){
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {

        if(s1.length() > s2.length()){
            return false;
        }
        
        int start_w = 0;
        int end_w = s1.length()-1;

        while(end_w != s2.length()){
            
            string substr = s2.substr(start_w, end_w-start_w+1);

            if(check_permutation(substr, s1)){
                return true;
            }

            start_w ++;
            end_w ++;
        }

        return false;
    }
};