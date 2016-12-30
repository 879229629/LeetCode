#ifndef LEETCODE_225_SOLUTION_H_
#define LEETCODE_225_SOLUTION_H_

#include <queue>
#include <iostream>

class solution {
public:
    std::queue<int> q;

    // Push element x onto stack.
    void push(int x) {
        int len = q.size();
        q.push(x);
        while (len > 0) {
            int e = q.front();
            q.push(e);
            q.pop();
            --len;
        }
    }

    // Removes the element on top of the stack.
    void pop() {
        q.pop();
    }

    // Get the top element.
    int top() {
        return q.front();
    }

    // Return whether the stack is empty.
    bool empty() {
        return q.empty();
    }
};


#endif // LEETCODE_225_SOLUTION_H_
