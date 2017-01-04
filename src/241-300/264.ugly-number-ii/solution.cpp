#include "solution.h"

#include <vector>

int solution::nthUglyNumber(int n) {
    if (n < 1) return false;
    if (n == 1) return true;
    int t2 = 0, t3 = 0, t5 = 0;
    std::vector<int> nums(n);
    nums[0] = 1;
    for (int i = 1; i < n; ++i) {
        int num = std::min(nums[t2] * 2, std::min(nums[t3] * 3, nums[t5] * 5));
        if (num == nums[t2] * 2) ++t2;
        if (num == nums[t3] * 3) ++t3;
        if (num == nums[t5] * 5) ++t5;
        nums[i] = num;
    }
    return nums[n - 1];
}
