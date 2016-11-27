#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    char str[] = "aaa";
    char p[] = "ab*a*c*a";
    bool match = s.isMatch(str, p);
    std::cout << "str: [" << str << "][" << p << "][" << match << "]" << std::endl;
}