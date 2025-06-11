// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        vector<bool> vals;
        int max = 0;
        for(auto i:candies){
            if(i>=max){
                max = i;
            }
        }

        for(int i=0; i<candies.size(); i++){
            if(candies[i] + extraCandies >= max){
                vals.push_back(true);
            }
            else{
                vals.push_back(false);
            }
        }
        return vals;
    }
};