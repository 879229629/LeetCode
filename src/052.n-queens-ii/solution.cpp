#include "solution.h"


int solution::totalNQueens(int n) {
    std::vector<std::string> strs(n, std::string(n, '.'));
    int sum = 0;
    help(strs, 0, n, sum);
    return sum;
}

bool solution::help(std::vector<std::string> &strs, int row, int n, int &sum) {
    if (row == n) {
        ++sum;
        return true;
    }
    for (int col = 0; col < n; ++col) {
        if (isValid(strs, row, col, n)) {
            strs[row][col] = 'Q';
            help(strs, row + 1, n, sum);
            strs[row][col] = '.';
        }
    }
    return true;
}

bool solution::isValid(std::vector<std::string> &nQueens, int row, int col, int &n) {
    for (int i = 0; i != row; ++i) {
        if (nQueens[i][col] == 'Q') return false;
    }
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; --i, --j) {
        if (nQueens[i][j] == 'Q') return false;
    }
    for (int i = row - 1, j = col + 1; i >= 0 && j < n; --i, ++j) {
        if (nQueens[i][j] == 'Q') return false;
    }
    return true;
}

