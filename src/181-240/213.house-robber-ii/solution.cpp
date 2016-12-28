#include "solution.h"
#include <iostream>

int solution::rob(std::vector<int> &nums) {
    if (nums.empty()) return 0;
    if (nums.size() == 1) return nums[0];
    return std::max(rob(nums, 0, nums.size() - 2), rob(nums, 1, nums.size() - 1));
}

int solution::rob(const std::vector<int> &nums, int i, int j) {
    if (i == j) return nums[i];

    int current = 0;
    int pre = 0;
    for (int k = i; k <= j; ++k) {
        int temp = pre;
        pre = current;
        current = std::max(pre, nums[k] + temp);
    }
    return current;
}
