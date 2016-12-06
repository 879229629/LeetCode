#include "solution.h"

#include <iostream>

void solution::nextPermutation(std::vector<int> &nums) {
    if (nums.size() < 2) return;
    int j = nums.size() - 1;
    while (--j >= 0) {
        if (nums[j] < nums[j + 1]) break;
    }
    if (j >= 0) {
        int firstNum = nums[j];
        int k = j+1;
        std::cout << j << "," << k << "," << firstNum << std::endl;
        for (int i = j + 1; i < nums.size(); ++i) {
            if (nums[i] > firstNum && nums[i] < nums[k]) {
                k = i;
            }
        }
        nums[j] = nums[k];
        nums[k] = firstNum;
    }
    std::sort(nums.begin() + j + 1, nums.end());
    return;
}
