class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        
        priority_queue<int> maxHeap;
        int n = score.size();

        for(auto i:score){
            maxHeap.push(i);
        }

        unordered_map<int, string> ranks;
        int num;

        for(int i=0; i<n; i++){
            num = maxHeap.top();

            if(i==0){
                ranks[num] = "Gold Medal";
            }
            else if(i==1){
                ranks[num] = "Silver Medal";
            }
            else if(i==2){
                ranks[num] = "Bronze Medal";
            }
            else{
                ranks[num] = to_string(i+1);
            }
            maxHeap.pop();
        }

        vector<string> ans;
        for(auto i:score){
            ans.push_back(ranks[i]);
        }

        return ans;
    }
};