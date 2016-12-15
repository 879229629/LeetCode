#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::cout << "s: " << s.isInterleave("aabcc", "dbbca", "aadbbcbcac") << std::endl;
}