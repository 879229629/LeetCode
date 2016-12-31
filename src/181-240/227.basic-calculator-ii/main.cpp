#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    int res = s.calculate("3+2*2");
    std::cout << "s: " << res << std::endl;
}