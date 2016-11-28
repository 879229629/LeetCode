#include "solution.h"
#include <stdlib.h>

int solution::threeSumClosest(std::vector<int> &nums, int target) {
    if (nums.size() < 3) {
        return 0;
    }
    int sum = nums[0] + nums[1] + nums[2];
    std::sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 2; ++i) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        int l = i + 1;
        int r = nums.size() - 1;
        while (l < r) {
            int sum3 = nums[i] + nums[l] + nums[r];
            if (sum3 == target) return sum3;
            if (abs(sum3 - target) < abs(sum - target)) sum = sum3;
            if (sum3 <= target) ++l;
            if (sum3 > target) --r;
        }
    }
    return sum;
}