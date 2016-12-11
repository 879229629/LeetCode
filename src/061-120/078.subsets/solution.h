#ifndef LEETCODE_078_SOLUTION_H_
#define LEETCODE_078_SOLUTION_H_

#include <vector>

class solution {
public:
    std::vector<std::vector<int>> subsets(std::vector<int> &nums);

    void dfs(std::vector<std::vector<int>> &result, const std::vector<int> &nums, std::vector<int> res, int from);
};


#endif // LEETCODE_078_SOLUTION_H_
