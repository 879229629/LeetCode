#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<int> nums = {3, -2, -3, 3, -1, 0, 1};
    int ret = s.maxProduct(nums);
    std::cout << "s: " << ret << std::endl;
}