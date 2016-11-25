#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    int i = -2147483648;
    int ret = s.reverse(i);
    std::cout << "i: [" << i << "][" << ret << "]" << std::endl;
    // atoi
}