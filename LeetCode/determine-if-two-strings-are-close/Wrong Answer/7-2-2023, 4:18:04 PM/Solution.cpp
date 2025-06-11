// https://leetcode.com/problems/determine-if-two-strings-are-close

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        
        if(word1.length() != word2.length()){
            return false;
        }
        if(word1 == word2){
            return true;
        }

        unordered_map<char,int> M1;
        unordered_map<char,int> M2;

        for(auto i:word1){
            if(M1[i]){
                M1[i] += 1;
            }
            else{
                M1[i] = 1;
            }
        }

        for(auto i:word2){
            if(M2[i]){
                M2[i] += 1;
            }
            else{
                M2[i] = 1;
            }
        }

        vector<int> count_arr1;
        for(auto kv : M1) {
            count_arr1.push_back(kv.second);
        }

        vector<int> count_arr2;
        for(auto kv : M2) {
            count_arr2.push_back(kv.second);
        }

        sort(count_arr1.begin(), count_arr1.end());
        sort(count_arr2.begin(), count_arr2.end());

        if(count_arr1 == count_arr2){
            return true;
        }
        return false;
    }
};