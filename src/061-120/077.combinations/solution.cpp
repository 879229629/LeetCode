#include "solution.h"

std::vector<std::vector<int>> solution::combine(int n, int k) {
    if (n < k) return {};
    std::vector<std::vector<int>> result;
    std::vector<int> res;
    dfs(result, res, 1, n, k);
    return result;
}

void solution::dfs(std::vector<std::vector<int>> &result, std::vector<int> res, int from, int to, int k) {
    if (res.size() == k) {
        result.push_back(res);
        return;
    }
    for (int i = from; i <= to; ++i) {
        res.push_back(i);
        dfs(result, res, i + 1, to, k);
        res.pop_back();
    }
}

