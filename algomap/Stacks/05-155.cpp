#include <bits/stdc++.h>
using namespace std;

class MinStack {
private:
    vector<vector<int>> stack;

public:
    MinStack() {
        
    }
    
    void push(int val) {
        int min = getMin();
        if (stack.empty() || val < min)  {
            stack.push_back({val, val});
        }   else {
            stack.push_back({val, min});
        }
    }
    
    void pop() {
        if (!stack.empty()) {
            stack.pop_back();
        }
    }
    
    int top() {
        if (!stack.empty()) {
            return stack.back()[0];
        }
        return -1;
    }
    
    int getMin() {
        if (!stack.empty()) {
            return stack.back()[1];
        }
        return -1;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */