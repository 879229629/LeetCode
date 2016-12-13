#ifndef LEETCODE_090_SOLUTION_H_
#define LEETCODE_090_SOLUTION_H_

#include <vector>

class solution {
public:
    std::vector<std::vector<int>> subsetsWithDup(std::vector<int> &nums);

    void dfs(std::vector<std::vector<int>> &result, const std::vector<int> &nums, std::vector<int> res, int from);
};


#endif // LEETCODE_090_SOLUTION_H_
