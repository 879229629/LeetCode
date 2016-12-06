#include "solution.h"

#include <algorithm>

int solution::maxSubArray(std::vector<int> &nums) {
    if (nums.empty()) return 0;
    int sum = 0;
    int max = INT_MIN;
    int i = 0;

    while (i < nums.size()) {
        sum += nums[i];
        if (sum <= 0) {
            max = nums[i] < 0 ? std::max(max, nums[i]) : std::max(max, sum);
            sum = 0;
            ++i;
            continue;
        }
        ++i;
        max = std::max(max, sum);
    }
    return max;
}
