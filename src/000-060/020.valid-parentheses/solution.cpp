#include "solution.h"

#include <stack>

bool solution::isValid(std::string s) {
    std::stack<char> mystack;
    for (int i = 0; i < s.size(); ++i) {
        if (mystack.empty()) {
            mystack.push(s[i]);
            continue;
        }
        if ((s[i] == ']' && mystack.top() == '[') ||
            (s[i] == '}' && mystack.top() == '{') ||
            (s[i] == ')' && mystack.top() == '(')) {
            mystack.pop();
        } else {
            mystack.push(s[i]);
        }
    }
    return mystack.empty();
}
