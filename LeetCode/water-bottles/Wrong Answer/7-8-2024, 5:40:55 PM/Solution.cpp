// https://leetcode.com/problems/water-bottles

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        
        if(numBottles % numExchange == 0){
            return numExchange + numBottles + 1;
        }
        return numExchange + numBottles;
    }
};