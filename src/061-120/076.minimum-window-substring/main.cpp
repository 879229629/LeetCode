#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::string s1 = "ADOBECODEBANC";
    std::string s2 = "ABC";
    std::string r = s.minWindow(s1, s2);
    std::cout << "[" << s1 << "][" << s2 << "][" << r << "]" << std::endl;
}