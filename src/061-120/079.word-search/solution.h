#ifndef LEETCODE_079_SOLUTION_H_
#define LEETCODE_079_SOLUTION_H_

#include <vector>
#include <string>

class solution {
public:
    bool exist(std::vector<std::vector<char>> &board, std::string word);

    bool dfs(const std::vector<std::vector<char>> &board, std::vector<bool> nums,
             int i, int j, int from, const std::string &word);
};


#endif // LEETCODE_079_SOLUTION_H_
