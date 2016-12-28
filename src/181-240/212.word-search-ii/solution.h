#ifndef LEETCODE_212_SOLUTION_H_
#define LEETCODE_212_SOLUTION_H_

#include <vector>
#include <string>

#include "../../common/trieNode.h"

class solution {
public:
    std::vector<std::string> findWords(std::vector<std::vector<char>> &board, std::vector<std::string> &words);

    void checkWords(std::vector<std::vector<char>> &board,
                    int i, int j, int row, int col, TrieNode *root,
                    std::vector<std::string> &res, const std::vector<std::string> &words);

};


#endif // LEETCODE_212_SOLUTION_H_
