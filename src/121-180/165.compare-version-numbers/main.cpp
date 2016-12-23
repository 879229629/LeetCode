#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    int ret = s.compareVersion("0.1", "0.0.1");
    std::cout << ret << "\n";
}