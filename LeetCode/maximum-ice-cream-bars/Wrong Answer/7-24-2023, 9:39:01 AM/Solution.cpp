// https://leetcode.com/problems/maximum-ice-cream-bars

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        
        sort(costs.begin(), costs.end());
        int n = costs.size();

        for(int i=0; i<n-1; i++){
            if(costs[i] < coins){
                costs[i+1] += costs[i];
            }
            else{
                if(i==0){
                    return 0;
                }
                return i+1;
            }
        }

        return n;
    }
};