// https://leetcode.com/problems/count-items-matching-a-rule

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {

        int count = 0;
        
        for(auto vec:items){
            if(ruleKey=="type"){
                if(vec[0]==ruleValue){
                    count++;
                }
            }
            if(ruleKey=="color"){
                if(vec[1]==ruleValue){
                    count++;
                }
            }
            if(ruleKey=="name"){
                if(vec[2]==ruleValue){
                    count++;
                }
            }
        }

        return count;
    }
};