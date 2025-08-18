class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    int removeDuplicates(vector<int>& nums) {
        int j = 1;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] != nums[i+1]){
                nums[j++] = nums[i+1];
            } 
        }
        return j;
    }
};