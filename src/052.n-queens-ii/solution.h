#ifndef LEETCODE_052_SOLUTION_H_
#define LEETCODE_052_SOLUTION_H_

#include <string>
#include <vector>

class solution {
public:
    int totalNQueens(int n);

    bool help(std::vector <std::string> &strs, int row, int n, int &sum);

    bool isValid(std::vector <std::string> &nQueens, int row, int col, int &n);

};


#endif // LEETCODE_052_SOLUTION_H_
