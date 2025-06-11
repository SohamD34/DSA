// https://leetcode.com/problems/most-profit-assigning-work

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        
        int n = worker.size();
        int m = difficulty.size();
        vector<int> assigned_profits(n,0);

        int sum = 0;

        for(int i=0; i<n; i++){

            for (int j=0; j<m; j++){
                if(difficulty[j] <= worker[i] && assigned_profits[i]<profit[j]){
                    sum = sum + profit[j] - assigned_profits[i];
                    assigned_profits[i] = profit[j];
                }
            }
        }

        return sum;
    }
};