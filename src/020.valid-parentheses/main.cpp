#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::string str = "[]";
    std::cout << "str: " << str << "," << s.isValid(str) << std::endl;
}