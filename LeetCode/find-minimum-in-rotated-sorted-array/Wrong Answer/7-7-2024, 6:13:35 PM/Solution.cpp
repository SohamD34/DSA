// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array

class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int start = 0;
        int end = nums.size()-1;
        int mid;

        while(start <= end){
            mid = start + (end - start)/2;

            if(mid==start){
                return nums[mid];
            }

            if(nums[mid] >= nums[end]){
                start = mid+1;
            }
            else{
                end = mid;
            }
        }
        return -1;
    }
};