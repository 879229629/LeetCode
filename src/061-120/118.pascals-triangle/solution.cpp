#include "solution.h"

std::vector<std::vector<int>> solution::generate(int numRows) {
    std::vector<std::vector<int>> result(numRows);
    for (int i = 0; i < numRows; ++i) {
        int to = i + 1;
        std::vector<int> nums(to, 0);
        for (int j = 0; j < to; ++j) {
            if (i == 0 || j == 0 || j == to - 1) nums[j] = 1;
            else nums[j] = result[i - 1][j - 1] + result[i - 1][j];
        }
        result[i] = nums;
    }
    return result;
}
