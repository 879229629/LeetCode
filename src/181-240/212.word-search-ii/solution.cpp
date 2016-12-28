#include "solution.h"

#include <iostream>

std::vector<std::string> solution::findWords(
        std::vector<std::vector<char>> &board,
        std::vector<std::string> &words) {
    if (words.empty() || board.empty()) return {};

    TrieNode *root = new TrieNode();
    for (int i = 0; i < words.size(); ++i) {
        const std::string &word = words[i];
        TrieNode *p = root;
        for (char c:word) {
            int pos = c - 'a';
            if (p->children[pos] == nullptr) p->children[pos] = new TrieNode();
            p = p->children[pos];
        }
        p->isKey = true;
        p->pos = i;
    }

    std::vector<std::string> res;
    for (int i = 0; i < board.size(); ++i) {
        for (int j = 0; j < board[i].size() && res.size() < words.size(); ++j) {
            checkWords(board, i, j, board.size(), board[i].size(), root, res, words);
        }
    }
    return res;
}

void solution::checkWords(std::vector<std::vector<char>> &board,
                          int i, int j, int row, int col,
                          TrieNode *root,
                          std::vector<std::string> &res,
                          const std::vector<std::string> &words) {
    char tmp = board[i][j];
    if (tmp == 'X') return;
    TrieNode *p = root->children[tmp - 'a'];
    if (p == nullptr) return;
    if (p->isKey) {
        res.push_back(words[p->pos]);
        p->isKey = false;
    }
    board[i][j] = 'X';
    if (i > 0) checkWords(board, i - 1, j, row, col, p, res, words);
    if (i + 1 < row) checkWords(board, i + 1, j, row, col, p, res, words);
    if (j > 0) checkWords(board, i, j - 1, row, col, p, res, words);
    if (j + 1 < col) checkWords(board, i, j + 1, row, col, p, res, words);
    board[i][j] = tmp;
    return;
}
