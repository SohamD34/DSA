// https://leetcode.com/problems/minimum-deletions-to-make-string-balanced

class Solution {
public:
    int minimumDeletions(string s) {
        
        int start_b = 0;
        int end_a = 0;
        int n = s.length();

        for(int i=0; i<n; i++){
            if(s[i] == 'b'){
                start_b = i;
                break;
            }
        }

        for(int j=n-1; j>=0; j--){
            if(s[j] == 'a'){
                end_a = j;
                break;
            }
        }

        // if already valid
        if(start_b > end_a){
            return 0;
        }

        // else
        int count_a = 0;
        int count_b = 0;
        for(int i=start_b; i<end_a+1; i++){
            if(s[i] == 'a'){
                count_a += 1;
            }
            else{
                count_b += 1;
            }
        }

        return min(count_a, count_b);
    }
};