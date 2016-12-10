#include "solution.h"

#include <iostream>

bool solution::searchMatrix(std::vector<std::vector<int>> &matrix, int target) {
    if (matrix.empty()) return false;
    int m = matrix.size();
    int n = matrix[0].size();
    int i = 0;
    int j = 0;
    while (i < m && j < n) {
//        std::cout << i << "," << j << std::endl;
        int num = matrix[i][j];
        if (num == target) return true;
        if (target < num) return false;

        /*
        if (i + 1 < m && j + 1 < n && matrix[i + 1][j + 1] <= target) {
            ++i;
            continue;
        }*/

        if (i + 1 < m && matrix[i + 1][j] <= target) {
            ++i;
            continue;
        }
        if (j + 1 < n && matrix[i][j + 1] <= target) {
            ++j;
            continue;
        }
//        std::cout << i << "," << j << "," << m << "," << n << std::endl;
        break;
    }
    return false;
}
