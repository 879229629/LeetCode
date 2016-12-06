#include <iostream>
#include <string>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::string str1 = "abb";
    std::string str2 = "bb";
    int ret = s.strStr(str1, str2);
    std::cout << "str1: " << str1 << "," << str2 << ", " << ret << std::endl;
}