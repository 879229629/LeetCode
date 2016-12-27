#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<int> nums = {2, 3, 1, 2, 4, 3};
    std::cout << "s: " << s.minSubArrayLen(7, nums) << std::endl;
}