#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<int> nums = {100, 4, 200, 1, 3, 2};
    int max = s.longestConsecutive(nums);
    std::cout << "s: " << max << std::endl;
}