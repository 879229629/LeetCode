#include "solution.h"

#include <cmath>
#include <stack>

int solution::longestValidParentheses(std::string s) {
    std::stack<int> data;
    data.push(-1);
    int pos = 0;
    int max = 0;

    while (pos < s.length()) {
        char c = s[pos];
        int i = data.top();
        if (i != -1 && c == ')' && s[i] == '(') {
            data.pop();
            max = std::max(max, pos - data.top());
        } else {
            data.push(pos);
        }
        ++pos;
    }
    return max;
}
