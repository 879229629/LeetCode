#include "solution.h"

#include <iostream>

int solution::uniquePathsWithObstacles(std::vector<std::vector<int>> &obstacleGrid) {
    int m = obstacleGrid.size();
    int n = obstacleGrid[0].size();
    std::vector<std::vector<int>> data(m, std::vector<int>(n, 0));

    for (int i = 0; i < m && obstacleGrid[i][0] == 0; ++i) {
        for (int j = 0; j < n && obstacleGrid[i][j] == 0; ++j) {
            data[i][j] = obstacleGrid[i][j] == 1 ? 0 : 1;
        }
    }

    /*
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << data[i][j] << "  ";
        }
        std::cout << std::endl;
    }*/

    for (int i = 1; i < m; ++i) {
        for (int j = 1; j < n; ++j) {
            if (obstacleGrid[i][j] != 1) {
                data[i][j] = data[i][j - 1] + data[i - 1][j];
            }
        }
    }
    return data[m - 1][n - 1];
}
