#include "solution.h"

int solution::rob(std::vector<int> &nums) {
    if (nums.empty()) return 0;
    for (int i = 1; i < nums.size(); ++i) {
        if (i == 1) {
            nums[i] = std::max(nums[i - 1], nums[i]);
        } else {
            nums[i] = std::max(nums[i - 1], nums[i] + nums[i - 2]);
        }
    }
    return nums[nums.size() - 1];
}

