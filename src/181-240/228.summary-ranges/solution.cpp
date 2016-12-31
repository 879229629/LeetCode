#include "solution.h"

std::vector<std::string> solution::summaryRanges(std::vector<int> &nums) {
    std::vector<std::string> res;
    if (nums.empty()) return res;

    int start = 0;
    int i = 0;
    while (i < nums.size()) {
        while (i + 1 < nums.size() && nums[i + 1] == nums[i] + 1) ++i;
        if (i == start) {
            res.push_back(std::to_string(nums[start]));
        } else {
            res.push_back(std::to_string(nums[start]) + "->" + std::to_string(nums[i]));
        }
        ++i;
        start = i;
    }
    return res;
}
