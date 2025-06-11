// https://leetcode.com/problems/counting-bits

class Solution {
public:
    vector<int> countBits(int n) {

        vector<int> v;
        for(int i=0; i<=n; i++){
            if(i==0){
                v.push_back(0);
            }
            else if(i==1 or i==2){
                v.push_back(1);
            }
            else if(i==3 or i==5){
                v.push_back(2);
            }
            else if(i==7){
                v.push_back(3);
            }
            else{
                v.push_back(v[i/2]);
            }
        }

        return v;
    }
};