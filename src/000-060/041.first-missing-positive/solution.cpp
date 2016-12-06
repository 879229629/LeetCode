#include "solution.h"

int solution::firstMissingPositive(std::vector<int> &nums) {
    for (int i = 0; i < nums.size(); ++i) {
        while (nums[i] > 0 && nums[i] <= nums.size() && nums[i] != nums[nums[i] - 1]) {
            std::swap(nums[i], nums[nums[i] - 1]);
        }
    }

    for (int j = 0; j < nums.size(); ++j) {
        if (nums[j] != j + 1) {
            return j + 1;
        }
    }
    return nums.size() + 1;
}
