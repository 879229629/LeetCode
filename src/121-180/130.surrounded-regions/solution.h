#ifndef LEETCODE_130_SOLUTION_H_
#define LEETCODE_130_SOLUTION_H_

#include <vector>

class solution {
public:
    void solve(std::vector<std::vector<char>> &board);

    void bfsBoundary(std::vector<std::vector<char>> &board, int w, int l);
};


#endif // LEETCODE_130_SOLUTION_H_
