// https://leetcode.com/problems/greatest-common-divisor-of-strings

class Solution {
public:

    string gcdOfStrings(string str1, string str2) {
        
        string ans = "";

        if(str1+str2 == str2+str1){
            int l1 = str1.length();
            int l2 = str2.length();
            
            int div = __gcd(l1,l2);

            for(int i=0; i<div; i++){
                ans+= str2[i];
            }
        }

        return ans;
    }
};