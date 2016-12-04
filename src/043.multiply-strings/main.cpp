#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::string str = s.multiply("9", "9");

    std::cout << "str: " << str << std::endl;
}