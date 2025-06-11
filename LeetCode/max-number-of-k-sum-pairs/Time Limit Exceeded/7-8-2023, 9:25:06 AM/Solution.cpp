// https://leetcode.com/problems/max-number-of-k-sum-pairs

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
        int n = nums.size();
        vector<int> visited;
        for(int i=0; i<n; i++){
            visited.push_back(0);
        }

        int count = 0;

        for(int i=0; i<n-1; i++){
            if(visited[i] == 0){

                for(int j=i+1; j<n; j++){

                    if(nums[i]+nums[j] == k && visited[j]==0){
                        visited[i] = 1;
                        visited[j] = 1;
                        cout<<nums[i]<<nums[j]<<endl;
                        count += 1;
                        break;
                    }
                }
            }
        }

        return count;
    }
};