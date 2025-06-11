// https://leetcode.com/problems/maximum-points-after-enemy-battles

class Solution {
public:
    long long maximumPoints(vector<int>& enemyEnergies, int currentEnergy) {
        
        long long sum = 0;
        
        sort(enemyEnergies.begin(), enemyEnergies.end());
        
        for(int i=0; i<enemyEnergies.size(); i++){
            
            if(currentEnergy % enemyEnergies[i] && sum){
                sum += enemyEnergies[i]%currentEnergy;
                
                if(currentEnergy >= enemyEnergies[i]){
                    currentEnergy = currentEnergy - enemyEnergies[i];
                }
            }
            else{
                sum += currentEnergy/enemyEnergies[i];
            }
        }
        return sum;
    }
};