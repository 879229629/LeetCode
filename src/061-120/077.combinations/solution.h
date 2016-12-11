#ifndef LEETCODE_077_SOLUTION_H_
#define LEETCODE_077_SOLUTION_H_

#include <vector>

class solution {
public:
    std::vector<std::vector<int>> combine(int n, int k);

    void dfs(std::vector<std::vector<int>> &result, std::vector<int> res, int from, int to, int k);
};


#endif // LEETCODE_077_SOLUTION_H_
