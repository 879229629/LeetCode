#ifndef LEETCODE_036_SOLUTION_H_
#define LEETCODE_036_SOLUTION_H_

#include <vector>

class solution {
public:
    bool isValidSudoku(std::vector<std::vector<char>> &board);

    bool isValid(const std::vector<std::vector<char>> &nums, int i1, int i2, int j1, int j2);
};


#endif // LEETCODE_036_SOLUTION_H_
