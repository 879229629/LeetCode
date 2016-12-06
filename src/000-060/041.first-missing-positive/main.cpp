#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<int> nums = {3, 4, -1, 1};
    int ret = s.firstMissingPositive(nums);
    std::cout << "ret: " << ret << std::endl;
}