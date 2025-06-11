// https://leetcode.com/problems/two-sum

class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target){

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        unordered_map<int, int> M;
        int n = nums.size();

        for(int i=0; i<n; i++){
            M[nums[i]] = i+1;
        }

        for(int i=0; i<n; i++){
            if(M[target - nums[i]] && (M[target - nums[i]]-1 != i)){
                return {i, M[target - nums[i]]-1};
            }
        }

        return {}; 
    }
};