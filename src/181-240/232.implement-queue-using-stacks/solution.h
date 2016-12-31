#ifndef LEETCODE_232_SOLUTION_H_
#define LEETCODE_232_SOLUTION_H_

#include <stack>

class solution {
public:
    std::stack<int> s;

    void push(int x) {
        std::stack<int> tmp;
        while (!s.empty()) {
            tmp.push(s.top());
            s.pop();
        }
        s.push(x);
        while (!tmp.empty()) {
            s.push(tmp.top());
            tmp.pop();
        }
    }

    // Removes the element from in front of queue.
    void pop(void) {
        s.pop();
    }

    // Get the front element.
    int peek(void) {
        return s.top();
    }

    // Return whether the queue is empty.
    bool empty(void) {
        return s.empty();
    }
};


#endif // LEETCODE_232_SOLUTION_H_
