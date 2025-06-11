// https://leetcode.com/problems/longest-common-prefix

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string common = "";

        // sorting the vectors to get smallest string
        sort(strs.begin(), strs.end());

        string smallest = strs[0];

        for(int i=0; i<smallest.size();i++){

            int count = 0;

            for (int j=1;j<strs.size();j++){
                if (strs[j][i] == smallest[i]){
                    count += 1;
                }
            }

            if (count == strs.size()-1){
                common+=smallest[i];
            }
        }

        return common;
    }
};