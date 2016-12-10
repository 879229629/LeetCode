#include "solution.h"

void solution::setZeroes(std::vector<std::vector<int>> &matrix) {
    if(matrix.empty()) return;
    int m = matrix.size();
    int n = matrix[0].size();
    bool row = false;
    bool column = false;

    for (int j = 0; j < n; ++j) {
        if (matrix[0][j] == 0) {
            column = true;
            break;
        }
    }
    for (int i = 0; i < m; ++i) {
        if (matrix[i][0] == 0) {
            row = true;
            break;
        }
    }

    for (int i = 1; i < m; ++i) {
        for (int j = 1; j < n; ++j) {
            if (matrix[i][j] == 0) {
                matrix[0][j] = 0;
                matrix[i][0] = 0;
                break;
            }
        }
    }

    for (int i = 1; i < m; ++i) {
        for (int j = 1; j < n; ++j) {
            if (matrix[0][j] == 0 || matrix[i][0] == 0) matrix[i][j] = 0;
        }
    }

    if (column) for (int j = 0; j < n; ++j) matrix[0][j] = 0;
    if (row) for (int i = 0; i < m; ++i) matrix[i][0] = 0;
    return;
}
