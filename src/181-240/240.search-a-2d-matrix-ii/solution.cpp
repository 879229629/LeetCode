#include "solution.h"

#include <iostream>

bool solution::searchMatrix(std::vector<std::vector<int>> &matrix, int target) {
    if (matrix.empty() || matrix[0].empty()) return false;
    int m = matrix.size() - 1;
    int n = matrix[0].size() - 1;

    int i = 0;
    int j = n;
    while (i <= m && j >= 0) {
        if (target == matrix[i][j]) {
            return true;
        } else if (target > matrix[i][j]) {
            ++i;
        } else {
            --j;
        }
    }
    return false;
}
