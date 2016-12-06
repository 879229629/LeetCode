#include "solution.h"

#include <iostream>

void solution::solveSudoku(std::vector<std::vector<char>> &board) {
    std::vector<std::pair<int, int>> pos;
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            if (board[i][j] == '.') {
                pos.push_back(std::pair<int, int>(i, j));
            }
        }
    }

    solve(board, pos, 0);
    return;
}

bool solution::solve(std::vector<std::vector<char>> &board, std::vector<std::pair<int, int>> pos, int cur) {
    if (cur >= pos.size()) return true;
    int x = pos[cur].first;
    int y = pos[cur].second;

    for (int i = 0; i < 9; ++i) {
        char c = i + '1';

        bool ok = true;
        // 检查是否匹配
        for (int j = 0; j < 9; ++j) {
            if (board[x][j] == c || board[j][y] == c) {
                ok = false;
                break;
            }
        }
        // 检查是否匹配
        int xs = x / 3 * 3;
        int ys = y / 3 * 3;
        for (int m = xs; m < xs + 3; ++m) {
            for (int n = ys; n < ys + 3; ++n) {
                if (board[m][n] == c) {
                    ok = false;
                    break;
                }
            }
        }
        if (ok) {
            board[x][y] = c;
            if (solve(board, pos, cur + 1)) return true;
            board[x][y] = '.';
        }
    }
    return false;
}
