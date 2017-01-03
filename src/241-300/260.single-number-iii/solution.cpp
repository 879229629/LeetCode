#include "solution.h"
#include <iostream>

std::vector<int> solution::singleNumber(std::vector<int> &nums) {
    int diff = 0;
    for (int i = 0; i < nums.size(); ++i) {
        diff ^= nums[i];
    }
    int j = 0;
    for (j = 0; j < 32; ++j) {
        if (((diff >> j) & 1) == 1) {
            break;
        }
    }
    int twice = 0;
    for (int k = 0; k < nums.size(); ++k) {
        if (((nums[k] >> j) & 1) == 1) {
            twice ^= nums[k];
        }
    }
    std::vector<int> res = {twice, twice ^ diff};
    return res;
}
