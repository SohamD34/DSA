// https://leetcode.com/problems/sum-of-square-numbers

class Solution {
public: 
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    bool judgeSquareSum(int c) {
        
        int low = 0;
        int high = sqrt(c);

        while(low < high){
            int val = pow(low,2) + pow(high,2);

            if(val == c){
                return true;
            }
            else if(val < c){
                low++;
            }
            else{
                high--;
            }
        }
        return false;
    }
};