// https://leetcode.com/problems/unique-number-of-occurrences

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        set<int> S;
        unordered_map<int,int> count;

        for(auto i:arr){
            if(count[i]){
                count[i] += 1;
            }
            else{
                count[i] = 1;
            }
        }

        vector<int> count_arr;
        for(auto kv : count) {
            count_arr.push_back(kv.second);
        }

        unordered_set<int> set1(count_arr.begin(), count_arr.end());

        if(set1.size() == count_arr.size()){
            return true;
        }
        return false;
    }
};