#include "solution.h"

#include <stack>
#include <string>
#include <iostream>
// "(1+(4+5+2)-3)+(6+8)"

int solution::calculate(std::string s) {
    std::stack<std::string> t;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == ' ') continue;
        if (s[i] == '(' || s[i] == '+' || s[i] == '-') {
            t.push(std::string(1, s[i]));
            continue;
        }
        std::string f;
        if (s[i] == ')') {
            f = t.top();
            t.pop();
            t.pop();
        } else {
            int start = i;
            while (i + 1 < s.length() && s[i + 1] >= '0' && s[i + 1] <= '9') ++i;
            f = s.substr(start, i - start + 1);
        }
        //
        if (t.empty()) {
            t.push(f);
        } else if (t.top() == "(") {
            t.push(f);
        } else {
            std::string op;
            op = t.top();
            t.pop();
            std::string second;
            second = t.top();
            t.pop();
            std::string third = op == "-" ? std::to_string(std::stoi(second) - std::stoi(f)) : std::to_string(
                    std::stoi(second) + std::stoi(f));
            t.push(third);
        }
    }
    std::cout << "size:" << t.size() << "][" << t.top() << "]\n";
    return std::stoi(t.top());
}
