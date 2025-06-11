// https://leetcode.com/problems/find-the-highest-altitude

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int alt = 0;
        int max_alt = 0;

        for(auto i:gain){
            alt+= i;

            if(alt > max_alt){
                max_alt = alt;
            }
        }

        return max_alt;
    }
};