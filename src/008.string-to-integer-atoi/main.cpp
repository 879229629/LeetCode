#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::string str = "-123";
    int ret = s.myAtoi(str);
    std::cout << "str: [" << str << "][" << ret << "]" << std::endl;
    std::cout << atoi("2147483648");
}