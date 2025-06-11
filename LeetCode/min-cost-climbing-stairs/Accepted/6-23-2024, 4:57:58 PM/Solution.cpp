// https://leetcode.com/problems/min-cost-climbing-stairs

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        
        int len = cost.size();

        for(int i=2; i<len; i++){
            cost[i] += min(cost[i-1], cost[i-2]);
        }
        return min(cost[len-1], cost[len-2]);
    }
};