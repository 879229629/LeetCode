#include "solution.h"
#include <iostream>

void solution::rotate(std::vector<int> &nums, int k) {
    if (nums.empty()) return;
    k = k % nums.size();

    int i = 0;
    int j = nums.size() - 1;
    while (i < j) std::swap(nums[i++], nums[j--]);

    int from = 0;
    int to = k - 1;

    while (from < to) {
        std::swap(nums[from], nums[to]);
        ++from;
        --to;
    }

    from = k;
    to = nums.size() - 1;
    while (from < to) {
        std::swap(nums[from], nums[to]);
        ++from;
        --to;
    }
    return;
}
