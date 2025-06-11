// https://leetcode.com/problems/removing-stars-from-a-string

class Solution {
public:
    string removeStars(string s) {
        
        int count_star = 0;
        string op = "";

        for(int i=s.length()-1; i>=0 ;i--){

            if(s[i] == '*'){
                count_star += 1;
            }
            else{
                if(count_star != 0){
                    count_star-=1;
                }
                else{
                    op = s[i] + op;
                }
            }
        }

        return op;
    }
};