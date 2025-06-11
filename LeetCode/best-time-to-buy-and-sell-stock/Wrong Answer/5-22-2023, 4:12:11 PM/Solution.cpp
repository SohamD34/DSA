// https://leetcode.com/problems/best-time-to-buy-and-sell-stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int last_min = prices[0];
        int min_indx = 0;
        int last_max = 0;
        int max_indx = 0;

        for(int i=0; i<prices.size()-1; i++){

            if(prices[i] < last_min){
                last_min = prices[i];
                min_indx = i;
            }
            if(prices[i] > last_max && i>min_indx){
                last_max = prices[i];
                max_indx = i;
            }
        }

        if(last_max < last_min){
            return 0;
        }
        return last_max - last_min;
    }
};