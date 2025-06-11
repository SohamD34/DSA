// https://leetcode.com/problems/number-of-recent-calls

class RecentCounter {
public:
    
    RecentCounter() {
        queue<int> Q;
    }
    
    int ping(int t) {
        Q.push(t);

        while(Q.front() < t-3000){
            Q.pop();
        }
        return Q.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */