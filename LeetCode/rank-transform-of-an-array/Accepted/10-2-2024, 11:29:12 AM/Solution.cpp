// https://leetcode.com/problems/rank-transform-of-an-array

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    vector<int> arrayRankTransform(vector<int>& arr) {
        
        vector<int> copy;
        for(auto i:arr){
            copy.push_back(i);
        }

        sort(copy.begin(), copy.end());

        unordered_map <int,int> M;
        int pos = 1;

        for(auto i:copy){
            if(M[i]){
                continue;
            }
            else{
                M[i] = pos;
                pos += 1;
            }
        }

        for(int i=0; i<arr.size(); i++){
            int pos = M[arr[i]];
            arr[i] = pos;
        }

        return arr;
    }
};