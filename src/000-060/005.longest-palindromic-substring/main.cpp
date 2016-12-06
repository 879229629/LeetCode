#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::string input = "dddwwede";
    std::string result = s.longestPalindrome(input);
    std::cout << "input: [" << input << "], result: [" << result << "]" << std::endl;
}