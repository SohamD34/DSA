// https://leetcode.com/problems/rank-transform-of-an-array

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        
        vector<int> copy;
        for(auto i:arr){
            copy.push_back(i);
        }

        sort(copy.begin(), copy.end());

        unordered_map<int, int> M;

        for(int i=0; i<copy.size(); i++){
            if(M[copy[i]]){
                continue;
            }
            else{
                M[copy[i]] = i+1;
            }
        }

        for(int i=0; i<arr.size(); i++){
            arr[i] = M[arr[i]];
        }

        return arr;
    }
};