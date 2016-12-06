#include "solution.h"

#include <cassert>


std::vector<std::vector<int>> solution::combinationSum(std::vector<int> &candidates, int target) {
    if (candidates.empty() || target < 1) return {};
    std::sort(candidates.begin(), candidates.end());
    assert(candidates[0] > 0);
    std::vector<std::vector<int> > res;
    std::vector<int> combination;
    combinationSum(candidates, target, res, combination, 0);

    return res;
}

void solution::combinationSum(std::vector<int> &candidates,
                              int target,
                              std::vector<std::vector<int> > &res,
                              std::vector<int> &combination,
                              int begin) {
    if (target == 0) {
        res.push_back(combination);
        return;
    }

    for (int i = begin; i < candidates.size() && candidates[i] <= target; ++i) {
        combination.push_back(candidates[i]);
        combinationSum(candidates, target - candidates[i], res, combination, i);
        combination.pop_back();
    }

    return;
}
