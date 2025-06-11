// https://leetcode.com/problems/permutation-in-string

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }

    bool check_permutation(string s2, string s1, int start_w, int end_w){

        int freq[26] = {0};

        for(int i=start_w; i<=end_w; i++){
            freq[s2[i]-'a']++;
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
            
            // string substr = s2.substr(start_w, end_w-start_w+1);

            if(check_permutation(s2, s1, start_w, end_w)){
                return true;
            }

            start_w ++;
            end_w ++;
        }

        return false;
    }
};