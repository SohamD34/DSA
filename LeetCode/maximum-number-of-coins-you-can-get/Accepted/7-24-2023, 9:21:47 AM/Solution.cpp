// https://leetcode.com/problems/maximum-number-of-coins-you-can-get

class Solution {
public:
    Solution() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }

    int maxCoins(vector<int>& piles) {
        
        sort(piles.begin(), piles.end());
        
        int n = piles.size();
        int sum = 0;

        for(int i=n-2; i>=n/3; i-=2){
            sum += piles[i];
        }
        
        return sum;
    }
};