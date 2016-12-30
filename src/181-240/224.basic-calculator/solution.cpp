#include "solution.h"

#include <stack>
#include <string>
#include <iostream>
// "(1+(4+5+2)-3)+(6+8)"

int solution::calculate(std::string s) {
    std::stack<int> nums, op;
    int num = 0;
    int res = 0;
    int flag = 1;
    for (char c:s) {
        if (isdigit(c)) {
            num = num * 10 + c - '0';
        } else {
            res += flag * num;
            num = 0;
            if (c == '+') flag = 1;
            if (c == '-') flag = -1;
            if (c == '(') {
                nums.push(res);
                op.push(flag);
                res = 0;
                flag = 1;
            }
            if (c == ')' && op.size() > 0) {
                res = op.top() * res + nums.top();
                op.pop();
                nums.pop();
            }
        }
    }
    res += flag * num;
    return res;
}
