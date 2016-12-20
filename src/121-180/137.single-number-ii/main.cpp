#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<int> nums = {1, 2, 3, 4, 5, 5, 3, 2, 1, 1, 2, 3, 5};
    int ret = s.singleNumber(nums);
    std::cout << "s: " << ret << std::endl;
}