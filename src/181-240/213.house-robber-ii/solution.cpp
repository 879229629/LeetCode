#include "solution.h"
#include <iostream>

int solution::rob(std::vector<int> &nums) {
    if (nums.empty()) return 0;
    if (nums.size() == 1) return nums[0];
    return std::max(rob(nums, 0, nums.size() - 2), rob(nums, 1, nums.size() - 1));
}

int solution::rob(std::vector<int> nums, int i, int j) {
    for (int k = i + 1; k <= j; ++k) {
        if (k == i + 1) nums[k] = std::max(nums[k], nums[k - 1]);
        else nums[k] = std::max(nums[k - 1], nums[k] + nums[k - 2]);
    }
    return nums[j];
}
