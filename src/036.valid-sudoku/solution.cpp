#include "solution.h"

#include <iostream>

bool solution::isValidSudoku(std::vector<std::vector<char>> &board) {
    for (int i = 0; i < 9; ++i) {
        if (!isValid(board, i, i + 1, 0, 9)) return false;
        if (!isValid(board, 0, 9, i, i + 1)) return false;
    }
    for (int i = 0; i < 9; i += 3) {
        for (int j = 0; j < 9; j += 3) {
            if (!isValid(board, i, i + 3, j, j + 3)) return false;
        }
    }
    return true;
}

bool solution::isValid(const std::vector<std::vector<char>> &board, int i1, int i2, int j1, int j2) {
    int sum = 0x00000000;
    for (; i1 < i2; ++i1) {
        for (int m = j1; m < j2; ++m) {
            char c = board[i1][m];
            if (c == '.') continue;
            int n = c - '0';
            if (sum & 1 << (n - 1)) {
                return false;
            }
            sum |= 1 << (n - 1);
        }
    }
    return true;
}