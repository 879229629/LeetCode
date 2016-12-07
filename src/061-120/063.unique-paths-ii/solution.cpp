#include "solution.h"

#include <iostream>

int solution::uniquePathsWithObstacles(std::vector<std::vector<int>> &obstacleGrid) {
    int m = obstacleGrid.size();
    int n = obstacleGrid[0].size();
    std::vector<std::vector<int>> data(m + 1, std::vector<int>(n + 1, 0));
    data[0][1] = 1;

    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (obstacleGrid[i - 1][j - 1] == 0) {
                data[i][j] = data[i - 1][j] + data[i][j - 1];
            }
        }
    }
    return data[m][n];
}
