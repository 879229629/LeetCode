#include "solution.h"

int solution::maximalRectangle(std::vector<std::vector<char>> &matrix) {
    if (matrix.empty()) return 0;
    int m = matrix.size();
    int n = matrix[0].size();
    std::vector<int> heights(n, 0);
    int ret = 0;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] == '1') ++heights[j];
            else heights[j] = 0;
        }
        ret = std::max(ret, largestRectangleArea(heights));
    }
    return ret;
}

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