#ifndef LEETCODE_200_SOLUTION_H_
#define LEETCODE_200_SOLUTION_H_

#include <vector>

class solution {
public:
    int numIslands(std::vector<std::vector<char>> &grid);

    void fill(std::vector<std::vector<char>> &grid, int i, int j);
};


#endif // LEETCODE_200_SOLUTION_H_
