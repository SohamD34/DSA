// https://leetcode.com/problems/minimum-array-changes-to-make-differences-equal

class Solution {
public:
    int minChanges(vector<int>& nums, int k) {
        
        int n = nums.size();
        int front = 0;
        int back = n-1;
        
        unordered_map<int, int> M;
        int most_occuring_diff = 0;
        int count = 0;
        
        vector<int> all_diffs;
        
        for(int i=0; i<n/2; i++){
            front = i;
            back = n-i-1;
            
            int diff = abs(nums[front] - nums[back]);
            all_diffs.push_back(diff);
            
            if(M[diff]){
                M[diff] += 1;
            }
            else{
                M[diff] = 1;
            }
            
            if(M[diff] > count){
                most_occuring_diff = diff;
                count = M[diff];
            }
        }
        
        int changes = 0;
        for(int i=0; i<n/2; i++){
            front = i;
            back = n-i-1;
            
            if(abs(nums[front] - nums[back]) != most_occuring_diff){
                int b = (nums[front] >= nums[back])? nums[front]: nums[back];
                int a = (nums[front] >= nums[back])? nums[back]: nums[front];
            
                if(a+most_occuring_diff <= k){ // change b value
                    changes += 1;
                }
                else if(b - most_occuring_diff >= 0 && b - most_occuring_diff <= k){
                    changes += 1;
                }
                else{
                    changes += 2;
                }
            }
        }
        return changes;
    }
};