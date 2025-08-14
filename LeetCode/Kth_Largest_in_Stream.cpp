class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>> maxHeap;
    int size=0;

    KthLargest(int k, vector<int>& nums) {
        size=k;
        for(auto it:nums)
            maxHeap.push(it);

        while(maxHeap.size()>k)
            maxHeap.pop();
    }
    
    int add(int val) {
        maxHeap.push(val);
        while(maxHeap.size()>size)
            maxHeap.pop();

        return maxHeap.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */