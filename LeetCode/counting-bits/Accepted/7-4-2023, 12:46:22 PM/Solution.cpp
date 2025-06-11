// https://leetcode.com/problems/counting-bits

class Solution {
public:

    int count_ones(int n){
        int c = 0;
        while(n > 0){
            int bit = n%2;
            if(bit==1){
                c += 1;
            }
            n/=2;
        }
        return c;
    }
    vector<int> countBits(int n) {
        
        vector<int> v;
        for(int i=0; i<=n; i++){
            v.push_back(count_ones(i));
        }

        return v;
    }
};