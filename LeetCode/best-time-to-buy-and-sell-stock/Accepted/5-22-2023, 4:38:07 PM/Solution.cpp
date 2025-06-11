// https://leetcode.com/problems/best-time-to-buy-and-sell-stock

class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int min_price = arr[0];
        int max_profit = 0;

        for(int i=0; i<arr.size(); i++){

            if(arr[i] < min_price){
                min_price = arr[i];
            }
            if(arr[i] - min_price > max_profit){
                max_profit = arr[i] - min_price;
            }
        }
        return max_profit;
    }
};