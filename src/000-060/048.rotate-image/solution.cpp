#include "solution.h"

void solution::rotate(std::vector<std::vector<int>> &matrix) {
    std::vector<std::vector<int>> a = matrix;
    int len = matrix.size();
    for (int i = 0; i < len; ++i) {
        for (int j = 0; j < len; ++j) {
            a[j][len-i-1] = matrix[i][j];
        }
    }
    matrix=a;
    return;
}
