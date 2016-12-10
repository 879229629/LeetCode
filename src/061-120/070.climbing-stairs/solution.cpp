#include "solution.h"

#include <vector>

int solution::climbStairs(int n) {
    if (n <= 2) return n;
    std::vector<int> nums(n + 1, 0);
    for (int i = 0; i <= n; ++i) {
        if (i <= 2) nums[i] = i;
        else nums[i] = nums[i - 1] + nums[i - 2];
    }
    return nums[n];
}
