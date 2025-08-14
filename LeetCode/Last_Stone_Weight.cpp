class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        priority_queue<int> maxHeap;
        for(auto i:stones){
            maxHeap.push(i);
        }

        int top_one, top_second;

        while(maxHeap.size() > 1){
            top_one = maxHeap.top();
            maxHeap.pop();

            top_second = maxHeap.top();
            maxHeap.pop();

            maxHeap.push(top_one - top_second);
        }

        return maxHeap.top();
    }
};