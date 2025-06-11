// https://leetcode.com/problems/find-peak-element

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int n = nums.size();

        if(nums[0] > nums[1]){
            return 0;
        }
        if(nums[n-1] > nums[n-2]){
            return n-1;
        }

        int hi = n-1;
        int lo = 0;

        while(lo < hi){

            int mid = (hi+lo)/2;

            if(nums[mid-1] < nums[mid] && nums[mid] > nums[mid+1]){
                return mid;
            }
            if(nums[mid] > nums[mid+1]){
                hi = mid;
            }
            else{
                lo = mid + 1;
            }
            
        }
        return lo;
    }
};