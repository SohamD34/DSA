// https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {

        vector<int> count;
        for(int i=0; i<=100; i++){
            count.push_back(0);
        }

        for(int i=0; i<nums.size(); i++){
            count[nums[i]]+=1;
        }

        vector<int> op;

        for(int i=0; i<nums.size(); i++){
            int elem = nums[i];
            int counts = 0;
            for(int j=0;j<elem; j++){
                counts += count[j];
            }
            op.push_back(counts);
        }
        return op;
        
    }
};