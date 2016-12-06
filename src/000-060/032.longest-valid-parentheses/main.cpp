#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::string str = "()(()";
    int ret = s.longestValidParentheses(str);
    std::cout << "str: " << str << "," << ret << std::endl;
}