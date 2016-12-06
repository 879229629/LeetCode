#include "solution.h"

std::vector<std::string> solution::generateParenthesis(int n) {
    std::vector<std::string> result;
    generate(0, 0, "", n, result);
    return result;
}

void solution::generate(int left, int right, std::string s, int n, std::vector<std::string> &result) {
    if (right == n) {
        result.push_back(s);
        return;
    }
    if (left < n) {
        generate(left + 1, right, s + "(", n, result);
    }
    if (right < left) {
        generate(left, right + 1, s + ")", n, result);
    }
    return;
}