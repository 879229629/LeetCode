#ifndef LEETCODE_MINSTACK_H_
#define LEETCODE_MINSTACK_H_

#include <stack>

class MinStack {
public:
    std::stack<int> s1;
    std::stack<int> s2;

    MinStack() {
    }

    void push(int x) {
        s1.push(x);
        if (s2.empty() || x <= getMin()) s2.push(x);
    }

    void pop() {
        if(s1.top()==s2.top()) s2.pop();
        s1.pop();
    }

    int top() {
        return s1.top();
    }

    int getMin() {
        return s2.top();
    }
};


#endif //LEETCODE_MINSTACK_H_
