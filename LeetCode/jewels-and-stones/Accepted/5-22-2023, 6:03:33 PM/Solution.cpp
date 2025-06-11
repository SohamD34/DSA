// https://leetcode.com/problems/jewels-and-stones

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        vector<char> jewel;
        for (auto i:jewels){
            jewel.push_back(i);
        }
        int count = 0;
        for(auto i:stones){
            if(find(jewel.begin(), jewel.end(), i) != jewel.end()){
                count+=1;
            }
        }
        return count;
    }
};