// https://leetcode.com/problems/h-index

class Solution {
public:
    int hIndex(vector<int>& citations) {
        
        sort(citations.begin(), citations.end(), greater<int>());
        
        // h - 6, 5, 3, 1, 0
        // i - 0, 1, 2, 3, 4

        int n = citations.size();
        int h = 0;

        for(int i=0; i<n; i++){
            if(citations[i] <= i){
                return i;
            }
        }

        return n;
    }
};