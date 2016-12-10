#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::string s1 = "stop";
    std::string s2 = "sot";
    int step = s.minDistance(s1, s2);
    std::cout << "s: [" << s1 << "][" << s2 << "][" << step << "]" << std::endl;
}