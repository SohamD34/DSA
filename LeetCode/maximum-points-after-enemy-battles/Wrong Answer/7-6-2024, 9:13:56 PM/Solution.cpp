// https://leetcode.com/problems/maximum-points-after-enemy-battles

class Solution {
public:
    long long maximumPoints(vector<int>& enemyEnergies, int currentEnergy) {
        
        long long sum = 0;
        
        for(int i=0; i<enemyEnergies.size(); i++){
            
            if(currentEnergy % enemyEnergies[i]){
                sum += enemyEnergies[i]%currentEnergy;
            }
            else{
                sum += currentEnergy/enemyEnergies[i];
            }
        }
        return sum;
    }
};