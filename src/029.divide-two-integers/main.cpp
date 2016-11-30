#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    int ret = s.divide(-2147483648, -3);

    std::cout << "ret: " << ret << std::endl;
}