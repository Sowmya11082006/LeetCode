// Problem: Implement Stack using Queues
// Platform: leetcode
// Contest: Easy
// Rating/Difficulty: Easy
// Language: C++17
// Verdict: Accepted
// URL: https://leetcode.com/problems/implement-stack-using-queues/submissions/2184329852/
// Solved on: 2026-10-29T00:38:31.233Z

class MyStack {
public:
    queue<int> q1;
    queue<int> q2;
    MyStack() {
        
    }
    
    void push(int x) {//0(1)
    if(q1.empty()){
        q1.push(x);
    }else{
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
    }
        
    }
    
    int pop() {
        int ans = q1.front();
        q1.pop();
        return ans;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
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