// https://leetcode.com/problems/subarray-sum-equals-k

class Solution {
public:
    // Solution(){
    //     ios_base::sync_with_stdio(false);
    //     cin.tie(nullptr);
    //     cout.tie(nullptr);
    // }
    int subarraySum(vector<int>& nums, int k) {
        
        int count = 0;
        int n = nums.size();
        
        for(int start=0; start<n; start++){

            int sum = 0;
            // cout<<"start: "<<start<<endl;

            for(int end=start; end<n; end++){

                sum+=nums[end];
                // cout<<"start: "<<start<<" end: "<<end<<" "<<"sum: "<<sum<<endl;

                if(sum == k){
                    count += 1;
                }
            }
        }
        return count;
    }
};