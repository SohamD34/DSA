// https://leetcode.com/problems/custom-sort-string

class Solution {
public:
    string customSortString(string order, string s) {
        
        unordered_map<char, int> M;

        for(auto i:s){
            if(M[i]){
                M[i]++;
            }
            else{
                M[i] = 1;
            }
        }

        int j=0;

        for(auto i:order){
            int count = M[i];

            while(count--){
                s[j] = i;
                j++;
            }
        }
        return s;
    }
};