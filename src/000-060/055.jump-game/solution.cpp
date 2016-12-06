#include "solution.h"

bool solution::canJump(std::vector<int> &nums) {
    if (nums.empty()) return true;
    int len = nums.size();
    int i = 0;
    for (int reach = 0; i <= reach && i < len; ++i) {
        reach = std::max(reach, i + nums[i]);
    }
    return i == len;
}
