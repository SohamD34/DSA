// https://leetcode.com/problems/shortest-subarray-with-or-at-least-k-ii

class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {

        int n = nums.size();
        int min_len = n;
        
        int start = 0;
        int end = 0;
        int or_val = nums[end];
        bool found = false;

        // vector<int> bitmask()

        while(start<=end && end<n){
            
            or_val |= nums[end];

            if(or_val >= k){
                found = true;
                int len = end - start + 1;
                min_len = (min_len < len)?min_len:len;

                // // how to remove start element from the OR value so that start++ ?
                // // use a bitmask

                // int bitmask = or_val;
                // for(int i=start+1; i<end;i++){
                //     bitmask &= (~nums[i]);
                // }

                // // this bitmask value will be the first element.
                // cout<<bitmask<<endl;

                // // to remove this from the OR val
                or_val &= (~nums[start]);
                start++;
            }
            else{
                end++;
            }
        }

        if(!found){
            return -1;
        }

        return min_len;
    }
};