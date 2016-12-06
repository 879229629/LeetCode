#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::string input("abcde");
    int num = 3;
    std::string output = s.convert(input, num);
    std::cout << "input: [" << input << "][" << num << "][" << output << "]" << std::endl;
}