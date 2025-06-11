// https://leetcode.com/problems/count-items-matching-a-rule

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {

        int count = 0;

        if(ruleKey=="type"){
            for(auto vec:items){
                if(vec[0]==ruleValue){
                    count++;
                }
            }
        }
        if(ruleKey=="color"){
            for(auto vec:items){
                if(vec[1]==ruleValue){
                    count++;
                }
            }
        }
        if(ruleKey=="name"){
            for(auto vec:items){
                if(vec[2]==ruleValue){
                    count++;
                }
            }
        }

        return count;
    }
};