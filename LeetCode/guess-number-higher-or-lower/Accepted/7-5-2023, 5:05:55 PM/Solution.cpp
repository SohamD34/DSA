// https://leetcode.com/problems/guess-number-higher-or-lower

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        
        int val = guess(n);
        
        if(val==0){
            return n;
        }
        else if(val = -1){
            return guessNumber(n-1);
        }
        else{
            return guessNumber(n+1);
        }

        return n;
    }
};