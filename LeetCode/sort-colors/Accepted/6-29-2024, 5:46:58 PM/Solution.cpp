// https://leetcode.com/problems/sort-colors

class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        //  since nums[i] is either 1,2,3 it is very helpful to use count sort here.
        //  this is a very intuitive method for lower number of unique elements

        // Step 1 : Initialise a counter for each of the three elements - 1,2,3.
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;

        // now traverse the array and update the count of each elements

        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                count0 += 1;
            }
            else if(nums[i]==1){
                count1 += 1;
            }
            else{
                count2 += 1;
            }
        }

        // now we can update the values in the nums array in place.
        // Update 0s first from index 0 to count0, 1s from count0+1 to count0+count1+1 
        // and then remaining 2s

        for(int i=0; i<count0; i++){
            nums[i] = 0;
        }
        for(int i=count0; i<count0+count1; i++){
            nums[i] = 1;
        }
        for(int i=count0+count1; i<count0+count1+count2; i++){
            nums[i] = 2;
        }
        
    }
};