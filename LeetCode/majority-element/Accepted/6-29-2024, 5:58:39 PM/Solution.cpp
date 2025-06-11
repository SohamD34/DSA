// https://leetcode.com/problems/majority-element

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    int majorityElement(vector<int>& nums) {
        
        int count = 0;
        int majorityElem = 0;

        for(auto i:nums){
            if(count == 0){
                majorityElem = i;
            }
            
            if(majorityElem == i){
                count ++;
            }
            else{
                count -= 1;
            }
        }
        return majorityElem;
    }
};