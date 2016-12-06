#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;

    double ret = s.myPow(1.00000, -2147483648);

    std::cout << "ret: " << ret << std::endl;
}