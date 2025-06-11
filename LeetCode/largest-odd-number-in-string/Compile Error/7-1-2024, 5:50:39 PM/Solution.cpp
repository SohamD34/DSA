// https://leetcode.com/problems/largest-odd-number-in-string

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
    }
    // bool isOdd(char n){
    //     if(n=='1' || n=='3' || n=='5' || n=='7' || n=='9'){
    //         return true;
    //     }
    //     return false;
    // }
    string largestOddNumber(string num) {
        
        int l = num.length();
        int mark = -1;

        for(int i=l-1; i>=0; i--){
            if(n=='1' || n=='3' || n=='5' || n=='7' || n=='9'){
                mark = i;
                break;
            }
        }

        return num.substr(0, mark+1);
    }
};