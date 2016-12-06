#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::string str = "DCXXI";
    int number = s.romanToInt(str);
    std::cout << "str: " << str << "," << number << "," << str.substr(2) << std::endl;
}