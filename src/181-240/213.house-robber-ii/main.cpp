#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<int> nums = {4, 7, 8};
    std::cout << "s: " << s.rob(nums) << std::endl;
}