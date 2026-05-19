class MinStack {
public:
    vector<int> normal_stack;
    vector<int> min_stack;
    MinStack() {
    }
    
    void push(int val) {
        normal_stack.push_back(val);
        if (min_stack.empty()) min_stack.push_back(val);
        else if (val <= min_stack.back()) min_stack.push_back(val);
    }
    
    void pop() {
        if (normal_stack.back() == min_stack.back()) min_stack.pop_back();
        normal_stack.pop_back();
    }
    
    int top() {
        return normal_stack.back();
    }
    
    int getMin() {
        return min_stack.back();
    }
};
