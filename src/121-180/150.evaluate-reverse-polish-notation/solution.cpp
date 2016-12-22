#include "solution.h"

#include <stack>

int solution::evalRPN(std::vector<std::string> &tokens) {
    std::stack<int> s;
    for (int i = 0; i < tokens.size(); ++i) {
        if (tokens[i] == "+") {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            s.push(b + a);
        } else if (tokens[i] == "-") {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            s.push(b - a);
        } else if (tokens[i] == "*") {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            s.push(b * a);
        } else if (tokens[i] == "/") {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            s.push(b / a);
        } else {
            s.push(std::stoi(tokens[i]));
        }
    }
    return s.top();
}
