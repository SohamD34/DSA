// https://leetcode.com/problems/sum-of-digits-of-string-after-convert

class Solution {
public:
    int getLucky(string s, int k) {
        
        string num = "";
        int sum = 0;   

        for(auto i:s){
            int pos = i - 'a' + 1;
            num += to_string(pos);
        }

        while(k--){
            string number = num;
            sum = 0;

            for(auto i:number){
                sum += (i - '0');
            }
            num = to_string(sum);
        }
    
        return sum;
    }
};