#include <iostream>
#include <vector>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<int> p = {1, 22, 44};
    int max = s.maxArea(p);
    std::cout << "p:" << sizeof(p) / sizeof(int) << "," << max << std::endl;
}