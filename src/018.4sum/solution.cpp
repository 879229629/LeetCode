#include "solution.h"

#include <iostream>

std::vector<std::vector<int>> solution::fourSum(std::vector<int> &nums, int target) {
    if (nums.size() < 4) return {};
    std::vector<std::vector<int>> result;
    std::sort(nums.begin(), nums.end());
    int length = nums.size();

    for (int i = 0; i < nums.size() - 3; ++i) {
        if (i > 0 && nums[i - 1] == nums[i]) continue;
        if (nums[i] + nums[i + 1] + nums[i + 2] + nums[3] > target) break;

        for (int j = i + 1; j < nums.size() - 2; ++j) {
            if (j > i + 1 && nums[j - 1] == nums[j]) continue;
            if (nums[i] + nums[j] + nums[j + 1] + nums[j + 2] > target) break;
            if (nums[i] + nums[j] + nums[length - 2] + nums[length - 1] < target) continue;

            int k = j + 1;
            int m = nums.size() - 1;


            int target2 = target - nums[i] - nums[j];
            while (k < m) {
                std::cout << k << ", " << m << std::endl;

                int sum2 = nums[k] + nums[m];
                if (sum2 < target2) {
                    ++k;
                } else if (sum2 > target2) {
                    --m;
                } else {
                    result.push_back({nums[i], nums[j], nums[k], nums[m]});
                    do { ++k; } while (nums[k] == nums[k - 1]);
                    do { --m; } while (nums[m] == nums[m + 1]);
                }
            }
        }
    }
    return result;
}
