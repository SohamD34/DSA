// https://leetcode.com/problems/maximum-points-after-enemy-battles

class Solution {
public:
    long long maximumPoints(vector<int>& enemyPowers, int currentEnergy) {
        
        int n = enemyPowers.size();
        long long score = 0;
        
        sort(enemyPowers.begin(), enemyPowers.end());
        
        int left = 0;
        int right = n-1;
        
        while(left <= right){
            
            if(enemyPowers[left] > currentEnergy){
                if(score == 0){
                    return 0;
                }
                while (currentEnergy < enemyPowers[left]) {
                    currentEnergy += enemyPowers[right];
                    right--;
                }
            } 
            else {
                int points = currentEnergy / enemyPowers[left];
                currentEnergy %= enemyPowers[left];
                score += points;
            }
           
        }
        return score;
    }
};