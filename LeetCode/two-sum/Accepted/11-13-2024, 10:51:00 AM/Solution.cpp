// https://leetcode.com/problems/two-sum

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    
    vector<int> find_two_Sum(vector<pair<int, int>> nums, int begin, int end, int target){

        sort(nums.begin(), nums.end());

        while(begin < end){
            if(nums[begin].first + nums[end].first == target){
                return {nums[begin].second, nums[end].second};
            }
            else if(nums[begin].first + nums[end].first < target){
                begin++;
            }
            else{
                end--;
            }
        }
        return {nums[begin].second, nums[end].second};
    }

    vector<int> twoSum(vector<int> &nums, int target){

        vector<pair<int, int>> indexed_nums;
        int n = nums.size();

        for(int i=0; i<n; i++){
            indexed_nums.push_back({nums[i], i});
        }

        return find_two_Sum(indexed_nums, 0, n-1, target);
    }
};