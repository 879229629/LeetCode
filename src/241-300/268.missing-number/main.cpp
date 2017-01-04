#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<int> nums = {0, 1, 2, 4, 3};
    std::cout << "s: " << s.missingNumber(nums) << std::endl;
}