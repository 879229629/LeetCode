#include "solution.h"

int solution::firstMissingPositive(std::vector<int> &nums) {
    std::sort(nums.begin(), nums.end());
    int ret = 1;
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] < 1) continue;
        if (nums[i] > ret) break;
        ret = nums[i]+1;
    }
    return ret;
}
