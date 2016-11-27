#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    int number =32;
    std::string str = s.intToRoman(number);
    std::cout << "number: " << number << ",str:"<< str << std::endl;
}