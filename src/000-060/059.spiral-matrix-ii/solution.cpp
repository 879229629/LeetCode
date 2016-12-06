#include "solution.h"

#include <iostream>

std::vector<std::vector<int>> solution::generateMatrix(int n) {
    std::vector<int> tmp(n, 0);
    std::vector<std::vector<int>> result(n, tmp);

    int row = 0;
    int column = 0;
    int m = n - 1;
    n = n - 1;

    int k = 1;

    while (true) {
//        std::cout << row << "," << column << "," << m << "," << n << std::endl;
        for (int i = column; i <= n; ++i) {
            result[row][i] = k++;
        }
        if (++row > m) break;

        for (int j = row; j <= m; ++j) {
            result[j][n] = k++;
        }
        if (--n < column) break;

        for (int l = n; l >= column; --l) {
            result[m][l] = k++;
        }
        if (--m < row) break;

        for (int i = m; i >= row; --i) {
            result[i][column] = k++;
        }
        if (++column > n) break;
    }

    return result;
}
