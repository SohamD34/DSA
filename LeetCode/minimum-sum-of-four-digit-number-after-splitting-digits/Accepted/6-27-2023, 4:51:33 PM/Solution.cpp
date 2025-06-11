// https://leetcode.com/problems/minimum-sum-of-four-digit-number-after-splitting-digits

class Solution {
public:
    vector<int> get_ints(int num){
        vector<int> digs;
        while(num > 0){
            digs.push_back(num%10);
            num/=10;
        }
        return digs;
    }

    int minimumSum(int num) {
        
        vector<int> digits = get_ints(num);
        sort(digits.begin(),digits.end());

        return (digits[0] + digits[1])*10 + (digits[2]+digits[3]);
    }
};