#include "solution.h"
#include <iostream>

std::vector<int> solution::spiralOrder(std::vector<std::vector<int>> &matrix) {
    if (matrix.empty()) return {};
    int m = matrix.size();
    int n = matrix[0].size();
    std::vector<int> result(m * n, 0);

    int k = 0;

    int u = 0;
    int r = n - 1;
    int d = m - 1;
    int l = 0;

    while (true) {
        for (int j = l; j <= r; ++j) result[k++] = matrix[u][j];
        if (++u > d) break;

        for (int i = u; i <= d; ++i) result[k++] = matrix[i][r];
        if (--r < l) break;


        for (int j = r; j >= l; --j) result[k++] = matrix[d][j];
        if (--d < u) break;

        for (int j = d; j >= u; --j) result[k++] = matrix[j][l];
        if (++l > r) break;
    }
    return result;
}

