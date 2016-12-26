#include "solution.h"

int solution::numIslands(std::vector<std::vector<char>> &grid) {
    if (grid.empty()) return 0;
    int count = 0;
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[0].size(); ++j) {
            if (grid[i][j] == '0') continue;
            ++count;
            fill(grid, i, j);
        }
    }
    return count;
}

void solution::fill(std::vector<std::vector<char>> &grid, int i, int j) {
    grid[i][j] = '0';
    if (j - 1 < grid[0].size() && grid[i][j - 1] == '1') {
        fill(grid, i, j - 1);
    }
    if (j + 1 < grid[0].size() && grid[i][j + 1] == '1') {
        fill(grid, i, j + 1);
    }
    if (i - 1 < grid.size() && grid[i - 1][j] == '1') {
        fill(grid, i - 1, j);
    }
    if (i + 1 < grid.size() && grid[i + 1][j] == '1') {
        fill(grid, i + 1, j);
    }
}
