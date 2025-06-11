// https://leetcode.com/problems/find-the-winning-player-in-coin-game

class Solution {
public:
    string losingPlayer(int x, int y) {
        
        // Alice and Bob selects 75 first -- then remaining 10
        // If remaining steps are odd - Alice gets one chance extra
        
        int max_steps = min(x, y/4);
        
        if(max_steps%2 == 0){
            return "Bob";
        }
        return "Alice";
    }
};