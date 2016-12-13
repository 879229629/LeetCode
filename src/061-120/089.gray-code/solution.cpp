#include "solution.h"
#include <iostream>

std::vector<int> solution::grayCode(int n) {
    std::vector<int> nums(1 << n);

    for (int i = 0; i < 1 << n; ++i) {
        nums[i] = i ^ i >> 1;
    }
    return nums;
}
