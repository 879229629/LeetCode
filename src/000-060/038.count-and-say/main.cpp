#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    int num = 1;
    while (num < 8) {
        std::string str = s.countAndSay(num);
        std::cout << "num:" << num << ",str: " << str << std::endl;
        ++num;
    }
}