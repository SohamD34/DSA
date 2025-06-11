// https://leetcode.com/problems/3sum

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }

    vector<vector<int>> ans;

    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        int n = nums.size();

        for(int i=0; i<n-2; i++){

            if(i>0 && nums[i] == nums[i-1]){
                continue;
            }

            int begin = i+1;
            int end = n-1;

            while(begin < end){

                if(nums[begin] + nums[end] + nums[i] == 0){
                    ans.push_back({nums[begin], nums[end], nums[i]});

                    while(begin < end && nums[begin]==nums[begin+1]){
                        begin++;
                    }
                    while(begin < end && nums[end] == nums[end-1]){
                        end--;
                    }
                    begin++;
                    end--;
                }

                else if(nums[begin] + nums[end] + nums[i] < 0){
                    begin++;
                }

                else{
                    end--;
                }
            }
        }

        return ans;
    }
};