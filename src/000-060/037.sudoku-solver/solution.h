#ifndef LEETCODE_037_SOLUTION_H_
#define LEETCODE_037_SOLUTION_H_

#include <vector>

class solution {
public:
    void solveSudoku(std::vector<std::vector<char>> &board);

    bool solve(std::vector<std::vector<char>> &board, std::vector<std::pair<int, int>> pos, int cur);
};


#endif // LEETCODE_037_SOLUTION_H_
