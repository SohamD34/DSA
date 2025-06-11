// https://leetcode.com/problems/custom-sort-string

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
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
            while(M[i]--){
                s[j] = i;
                j++;
            }
        }

        for(auto i:M){
            while(i.second > 0){
                s[j] = i.first;
                j++;
                i.second -= 1;
            }
        }

        return s;
    }
};