#ifndef LEETCODE_051_SOLUTION_H_
#define LEETCODE_051_SOLUTION_H_

#include <vector>
#include <string>

class solution {
public:
    std::vector<std::vector<std::string>> solveNQueens(int n);


    bool help(
            std::vector<std::string> &strs,
            int row,
            int n,
            std::vector<std::vector<std::string>> &result);

    bool isValid(std::vector<std::string> &nQueens, int row, int col, int &n);

    void print(const std::vector<std::string> &strs);
};


#endif // LEETCODE_051_SOLUTION_H_
