#include "solution.h"


int solution::findKthLargest(std::vector<int> &nums, int k) {
    if (nums.empty()) return 0;
    std::sort(nums.begin(), nums.end());
    return nums[k - 1];
}
