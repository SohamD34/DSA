// https://leetcode.com/problems/3sum

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());

        // Using set to avoid repeating triplets
        set<vector<int>> s;
        vector<vector<int>> output;

        // O(n) loop
        for (int i = 0; i < nums.size(); i++){
            
            // Using two pointer concept O(n log n)
            int j = i + 1;
            int k = nums.size() - 1;

            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0) {
                    s.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                } 
                else if (sum < 0) {
                    j++;
                } 
                else {
                    k--;
                }
            }
        }

        for(auto vec : s){
            output.push_back(vec);
        }
        return output;
    
    }
};