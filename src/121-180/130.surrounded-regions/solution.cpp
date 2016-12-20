#include "solution.h"
#include <iostream>

void solution::solve(std::vector<std::vector<char>> &board) {
    if (board.empty()) return;
    int m = board.size();
    int n = board[0].size();
    for (int i = 0; i < m; ++i) {
        if (board[i][0] == 'O') bfsBoundary(board, i, 0);
        if (board[i][n - 1] == 'O') bfsBoundary(board, i, n - 1);
    }
    for (int j = 0; j < n; ++j) {
        if (board[0][j] == 'O') bfsBoundary(board, 0, j);
        if (board[m - 1][j] == 'O') bfsBoundary(board, m - 1, j);
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (board[i][j] == 'O') board[i][j] = 'X';
            else if (board[i][j] == '*') board[i][j] = 'O';
        }
    }
}

void solution::bfsBoundary(std::vector<std::vector<char>> &board, int w, int l) {
    std::vector<std::pair<int, int>> s;
    s.push_back(std::make_pair(w, l));
    std::pair<int, int> pa;
    board[w][l] = '*';
    while (!s.empty()) {
        pa = s.back();
        s.pop_back();

        std::vector<std::pair<int, int>> adjs = {
                std::make_pair(pa.first - 1, pa.second),
                std::make_pair(pa.first + 1, pa.second),
                std::make_pair(pa.first, pa.second - 1),
                std::make_pair(pa.first, pa.second + 1)
        };

        for (int i = 0; i < 4; ++i) {
            if (adjs[i].first >= 0 &&
                adjs[i].first < board.size() &&
                adjs[i].second >= 0 &&
                adjs[i].second < board[0].size() &&
                board[adjs[i].first][adjs[i].second] == 'O') {
                s.push_back(adjs[i]);
                board[adjs[i].first][adjs[i].second] = '*';
            }
        }
    }
}
