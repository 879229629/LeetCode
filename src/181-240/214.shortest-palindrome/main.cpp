#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::string str = "abcbad";
    std::cout << "s: " << s.shortestPalindrome(str) << std::endl;
    std::cout << "s: " << s.KmpSearch("abcd", "bcd") << std::endl;
}