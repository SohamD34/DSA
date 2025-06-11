// https://leetcode.com/problems/minimum-length-of-string-after-operations

class Solution {
public:
    int minimumLength(string s) {
        int n = s.length();
        
        if(n<3){
            return n;
        }
        
        unordered_map<char, int> M;
        for(auto i:s){
            if(M[i]){
                M[i] += 1;
            }
            else{
                M[i] = 1;
            }
        }
        
        int sum = 0;
        for(auto i:M){
            while(i.second > 2){
                i.second -= 2;
            }
            sum += i.second;
        }
        return sum;
    }
};