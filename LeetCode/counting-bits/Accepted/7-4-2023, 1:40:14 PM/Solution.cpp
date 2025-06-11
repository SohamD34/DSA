// https://leetcode.com/problems/counting-bits

class Solution {
public:
    vector<int> countBits(int n) {

        vector<int> v;
        for(int i=0; i<=n; i++){
            if(i==0){
                v.push_back(0);
            }
            else{
                v.push_back(v[i/2] + i%2);
            }
        }

        return v;
    }
};