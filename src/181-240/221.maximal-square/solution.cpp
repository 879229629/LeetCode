#include "solution.h"

int solution::maximalSquare(std::vector<std::vector<char>> &matrix) {
    if (matrix.empty()) return 0;
    if (matrix[0].empty()) return 0;
    int m = matrix.size();
    int n = matrix[0].size();
    int res = 0;
    std::vector<std::vector<int>> nums(m, std::vector<int>(n, 0));
    for (int i = 0; i < m; ++i) {
        nums[i][0] = matrix[i][0] - '0';
        res = std::max(res, nums[i][0]);
    }
    for (int j = 0; j < n; ++j) {
        nums[0][j] = matrix[0][j] - '0';
        res = std::max(res, nums[0][j]);
    }
    for (int i = 1; i < m; ++i) {
        for (int j = 1; j < n; ++j) {
            if (matrix[i][j] == '0') continue;
            nums[i][j] = 1 + std::min(std::min(nums[i - 1][j], nums[i][j - 1]), nums[i - 1][j - 1]);
            res = std::max(res, nums[i][j]);
        }
    }
    return res * res;
}
