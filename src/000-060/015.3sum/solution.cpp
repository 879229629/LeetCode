#include "solution.h"

#include <iostream>

std::vector<std::vector<int>> solution::threeSum(std::vector<int> &nums) {
    std::vector<std::vector<int>> result;
    if (nums.size() < 3) {
        return result;
    }
    std::sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 2; ++i) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        int sum1 = nums[i];
        if (sum1 > 0) break;

        for (int j = i + 1; j < nums.size() - 1; ++j) {
            if (j > i + 1 && nums[j] == nums[j - 1]) continue;
            int sum2 = nums[i] + nums[j];
            if (sum2 > 0) break;

            for (int k = j + 1; k < nums.size(); ++k) {
                if (k > j + 1 && nums[k] == nums[k - 1]) continue;
                int sum3 = nums[i] + nums[j] + nums[k];
                if (sum3 == 0) result.push_back({nums[i], nums[j], nums[k]});
                if (sum3 > 0) break;
            }
        }
    }
    return result;
}