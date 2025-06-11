// https://leetcode.com/problems/search-in-rotated-sorted-array-ii

class Solution {
public:
    bool search(vector<int>& nums, int target) {

        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        bool found = false;

        for(auto i:nums){
            if(i == target){
                found = true;
                break;
            }
        }

        return found;
    }
};