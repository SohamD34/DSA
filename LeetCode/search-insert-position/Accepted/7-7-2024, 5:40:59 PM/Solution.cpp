// https://leetcode.com/problems/search-insert-position

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    int searchInsert(vector<int>& nums, int target) {
        
        int l=0;
        int r=nums.size()-1;
        int m;

        while(l<=r){
            
            m=(l+r)/2;

            if(nums[m]==target){
                return m;
            }
            else if(nums[m]>target){
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
        return l;
    }
};