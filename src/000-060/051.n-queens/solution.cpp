#include "solution.h"

#include <iostream>

std::vector<std::vector<std::string>> solution::solveNQueens(int n) {
    std::vector<std::vector<std::string>> result;

    std::vector<std::string> strs(n, std::string(n, '.'));

    help(strs, 0, n, result);


    return result;
}

bool solution::help(std::vector<std::string> &strs, int row, int n, std::vector<std::vector<std::string>> &result) {
    if (row == n) {
        result.push_back(strs);
        return true;
    }

    for (int col = 0; col < n; ++col) {
        if (isValid(strs, row, col, n)) {
            strs[row][col] = 'Q';
            help(strs, row + 1, n, result);
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

void solution::print(const std::vector<std::string> &strs) {
    for (int i = 0; i < strs.size(); ++i) {
        std::cout << strs[i] << std::endl;
    }
}
