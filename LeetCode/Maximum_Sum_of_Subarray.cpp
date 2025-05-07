#include <iostream>
#include <bits/stdc++.h>
using namespace std;

''' KADANE ALGORITHM - Maximum sum of subarray '''
/*
Given an integer array nums, find the subarray with the largest sum, and return its sum.


Logic  - 
Initialize:
    max_so_far = INT_MIN
    max_ending_here = 0

Loop for each element of the array

  (a) max_ending_here = max_ending_here + a[i]
  (b) if(max_so_far < max_ending_here)
            max_so_far = max_ending_here
  (c) if(max_ending_here < 0)
            max_ending_here = 0
return max_so_far


Time complexity = O(n)
*/

int maxSubArray(vector<int>& nums) {
        
        int max_ending_here = 0;
        int max_so_far = INT_MIN;

        for(int i=0; i<nums.size(); i++){

            max_ending_here += nums[i];
            max_so_far = max(max_so_far, max_ending_here);

            if(max_ending_here < 0){
                max_ending_here = 0;
            }
        } 

        return max_so_far;
    }