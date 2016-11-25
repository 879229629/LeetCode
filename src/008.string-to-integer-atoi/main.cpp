#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::string str = "-1";
    int ret = s.myAtoi(str);
    std::cout << "str: [" << str << "][" << ret << "][" << atoi(str.c_str()) << "]" << std::endl;
}