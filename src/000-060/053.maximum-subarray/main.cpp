#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<int> nums = {-2,-1};
    int sum = s.maxSubArray(nums);
    std::cout << "sum: " << sum << std::endl;
}