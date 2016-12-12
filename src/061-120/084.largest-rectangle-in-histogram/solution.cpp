#include "solution.h"
#include <iostream>
#include <vector>

int solution::largestRectangleArea(std::vector<int> &heights) {
    int ret = 0;
    std::vector<int> nums;
    heights.push_back(0);
    int len = heights.size();
    int i = 0;
    while (i < len) {
        if (nums.empty() || heights[i] >= heights[nums.back()]) {
            nums.push_back(i);
            ++i;
        } else {
            int t = nums.back();
            nums.pop_back();
            ret = std::max(ret, heights[t] * (nums.empty() ? i : i - nums.back() - 1));
        }
    }
    return ret;
}
