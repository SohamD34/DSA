// https://leetcode.com/problems/alternating-groups-ii

class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        
        int count_alternating = 0;
        int n = colors.size();

        for(int start=0; start<n; start++){

            int end = start+k-1;
            bool valid = true;
            int prev = colors[start];

            for(int i=start+1; i<=end; i++){

                // cout << prev<< " "<<colors[i%n] <<endl;

                if(colors[i%n] == prev){
                    valid = false;
                    break;
                }
                else{
                    prev = colors[i%n];
                    continue;
                }
            }
            if(valid){
                count_alternating++;
            }
        }
        return count_alternating;   
    }
};