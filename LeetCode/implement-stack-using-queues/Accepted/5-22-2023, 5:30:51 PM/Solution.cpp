// https://leetcode.com/problems/implement-stack-using-queues

class MyStack {
public:
    vector<int> Q;
    int top_indx = -1;

    MyStack() {
        
    }
    
    void push(int x) {
        top_indx+=1;
        Q.push_back(x);
    }
    
    int pop() {
        int val = Q[top_indx];
        Q.erase(Q.begin() + top_indx);
        top_indx-=1;
        return val;
    }
    
    int top() {
        return Q[top_indx];
    }
    
    bool empty() {
        if(top_indx == -1){
            return true;
        }
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */