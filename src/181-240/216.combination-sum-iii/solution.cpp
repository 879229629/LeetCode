#include "solution.h"
#include <iostream>

std::vector<std::vector<int>> solution::combinationSum3(int k, int n) {
    std::vector<std::vector<int>> res;
    std::vector<int> nums;
    helper(res, nums, k, n);
    return res;
}

void solution::helper(std::vector<std::vector<int>> &res, std::vector<int> &nums, int k, int n) {
    if (0 == n && nums.size() == k) {
        res.push_back(nums);
        return;
    }
    if (n < 0 | nums.size() > k) return;
    for (int i = nums.empty() ? 1 : nums.back() + 1; i <= 9; ++i) {
        if (n - i < 0) break;
        nums.push_back(i);
        helper(res, nums, k, n - i);
        nums.pop_back();
    }
}
