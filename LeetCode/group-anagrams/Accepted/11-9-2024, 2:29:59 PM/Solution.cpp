// https://leetcode.com/problems/group-anagrams

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> unique_sorted_strings;

        for(auto i:strs){
            string j = i;
            sort(j.begin(), j.end());
            unique_sorted_strings[j].push_back(i);
        }

        for(auto pair:unique_sorted_strings){
            ans.push_back(pair.second);
        }
        return ans;
    }
};