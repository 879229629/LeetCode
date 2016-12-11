#include "solution.h"

bool solution::exist(std::vector<std::vector<char>> &board, std::string word) {
    if (board.empty()) return word.empty();
    int m = board.size();
    int n = board[0].size();
    for (int i = 0; i < board.size(); ++i) {
        for (int j = 0; j < board[i].size(); ++j) {
            std::vector<bool> nums(m * n, false);
            if (dfs(board, nums, i, j, 0, word)) return true;
        }
    }
    return false;
}

bool solution::dfs(const std::vector<std::vector<char>> &board,
                   std::vector<bool> nums, int i, int j,
                   int from,
                   const std::string &word) {
    if (from == word.length()) return true;
    int m = board.size();
    int n = board[0].size();
    if (i < 0 || i >= m) return false;
    if (j < 0 || j >= n) return false;
    if (board[i][j] != word[from] || nums[n * i + j] == true) return false;
    nums[n * i + j] = true;

    if (dfs(board, nums, i - 1, j, from + 1, word)) return true;
    if (dfs(board, nums, i + 1, j, from + 1, word)) return true;
    if (dfs(board, nums, i, j - 1, from + 1, word)) return true;
    if (dfs(board, nums, i, j + 1, from + 1, word)) return true;
    return false;
}
