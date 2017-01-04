#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<int> nums = {1};
    int h = s.hIndex(nums);
    std::cout << "s: " << h << std::endl;
}