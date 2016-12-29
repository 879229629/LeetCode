#ifndef LEETCODE_216_SOLUTION_H_
#define LEETCODE_216_SOLUTION_H_

#include <vector>

class solution {
public:
    std::vector<std::vector<int>> combinationSum3(int k, int n);

    void helper(std::vector<std::vector<int>> &res, std::vector<int> &nums, int k, int n);
};


#endif // LEETCODE_216_SOLUTION_H_
