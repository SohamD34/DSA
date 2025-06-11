// https://leetcode.com/problems/alternating-groups-i

class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        
        int count_alternating = 0;
        int n = colors.size();
        
        for(int i=0; i<n; i++){
            int start = colors[i];
            int mid = colors[(i+1)%n];
            int end = colors[(i+2)%n];
            
            
            if(start == end && start != mid){
                count_alternating += 1;
            }
        }
        return count_alternating;
    }
};