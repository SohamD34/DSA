// https://leetcode.com/problems/longest-common-prefix

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string common = "";
        if(strss.size()==0){
            common = strs[0];
        }

        for(int i=1;i<strs[0].length();i++){
            string s = strs[0].substr(0,i);
            int count = 0;

            for(int j=1;j<strs.size();j++){
                if (strs[j].substr(0,i) == s){
                    count+=1;
                }
            }

            if(count==strs.size()-1){
                common = s;
            }
        }
        return common;
    }
};