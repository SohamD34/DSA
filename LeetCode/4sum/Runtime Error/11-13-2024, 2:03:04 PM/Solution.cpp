// https://leetcode.com/problems/4sum

class Solution {
public:
    // vector<vector<int>> ans;

    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;

        for(int i=0; i<n-3; i++){
            int num1 = nums[i];

            for(int j=i+1; j<n-2; j++){
                int num2 = nums[j];

                int low = j+1;
                int high = n-1;
                
                long long search = target - num1 - num2;

                while(low < high){
                    if(nums[low] + nums[high] == search){
                        ans.push_back({nums[low], nums[high], num1, num2});

                        int currhigh = high;
                        int currlow = low;

                        while(low < high && nums[low]==nums[currlow]){
                            low++;
                        }
                        while(low < high && nums[high] == nums[currhigh]){
                            high--;
                        }
                    }
                    else if(nums[low] + nums[high] < search){
                        low++;
                    }
                    else{
                        high--;
                    }
                }

                while(j+1<n && nums[j]==nums[j+1]){
                    j++;
                }
            }

            while(i+1<n && nums[i]==nums[i+1]){
                i++;
            }
        }

        return ans;
    }
};