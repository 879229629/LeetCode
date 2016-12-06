#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<std::string> input = {"abc", "abcd"};
    std::string result = s.longestCommonPrefix(input);
    std::for_each(input.begin(), input.end(),
                  [](std::string s) { std::cout << s << std::endl; });
    std::cout << "result: " << result << std::endl;
}