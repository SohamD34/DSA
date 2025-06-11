// https://leetcode.com/problems/shortest-subarray-with-or-at-least-k-ii

class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {

        int n = nums.size();
        int ans = n+1; 
        int or_val = 0; 
        
        // to store how many bit at ith position in the window is set, we use bitMap

        vector<int> bitMap(32, 0); 
        int left = 0; 

        for(int right=0; right<n; right++) {
            
            or_val |= nums[right]; 
            
            // set the bits in bitCount for nums[i]

            for(int j=31; j>=0; j--) {
                bitMap[j] += ((nums[right] & (1 <<j)) > 0); 
            }
            
            // if or greater than k 
            while(left <= right && or_val >= k) {

                if(or_val >= k){
                    ans = min(ans, right-left+1); // update answer
                }

                // now we need to remove left number from the or value
                // using bitMap as a bit mask

                int new_or = 0; 

                for(int j=31; j>=0; j--) {

                    int bit = nums[left] & (1 << j); 
                    bitMap[j] -= bit > 0;  

                    // if bitCount[j] > 0, ith bit still set, set the bit in new_or 

                    if(bitMap[j] > 0){
                        new_or |= (1 << j);
                    }  
                }
                
                or_val = new_or; 
                left++; 
            }
            
        }
        
        return ans == (n+1) ? -1 : ans; 
    }
};