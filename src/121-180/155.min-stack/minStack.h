#ifndef LEETCODE_MINSTACK_H_
#define LEETCODE_MINSTACK_H_

#include <vector>
#include <map>

class MinStack {
public:
    std::vector<int> nums;
    std::map<int, int> keys;

    MinStack() {
    }

    void push(int x) {
        nums.push_back(x);
        ++keys[x];
    }

    void pop() {
        int v = top();
        nums.pop_back();
        if (keys[v] == 1) keys.erase(v);
        else --keys[v];
    }

    int top() {
        return nums.back();
    }

    int getMin() {
        const auto &v = keys.begin();
        return v->first;
    }
};


#endif //LEETCODE_MINSTACK_H_
