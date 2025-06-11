// https://leetcode.com/problems/maximum-product-subarray

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }

    int maxProduct(vector<int>& nums) {

        int front_max = INT_MIN;
        int back_max = INT_MIN;
        int back_prod = 1;
        int front_prod = 1;
        int n = nums.size();

        for(int i=0; i<n; i++){
            
            front_prod *= nums[i];
            back_prod *= nums[n-1-i];

            front_max = max(front_prod, front_max);
            back_max = max(back_max, back_prod);
            
            if(front_prod == 0){
                front_prod = 1;
            }
            if(back_prod == 0){
                back_prod = 1;
            }
        }
        return max(front_max, back_max);
    }
};
