// https://leetcode.com/problems/longest-consecutive-sequence

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }

    int longestConsecutive(vector<int>& nums) {

        int n = nums.size();
        
        if(n<2){
            return n;
        }

        sort(nums.begin(), nums.end());

        // [1,2,3,4,100,200]
        // [0,0,1,2,3,4,5,6,7,8]

        int start = 0;
        int end = 1;
        int curr_len = 1;
        int max_len = 1;

        while(end != n){

            cout<<nums[end]<<endl;

            if(nums[end] == nums[end-1] + 1){
                curr_len++;
            }
            else if(nums[end] == nums[end-1]){
                curr_len = curr_len;
            }
            else{
                cout<<"Len = "<<curr_len<<endl;
                max_len = max(max_len, curr_len);
                start = end;
                curr_len = 1;
            }
            end++;
        }
        
        max_len = max(max_len, curr_len);
        return max_len;
    }
};