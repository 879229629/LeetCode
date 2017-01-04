#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<int> nums = {3, 0, 6, 1, 5};
    int h = s.hIndex(nums);
    std::cout << "s: " << h << std::endl;
}