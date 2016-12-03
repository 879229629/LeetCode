#include "solution.h"

#include <cassert>


std::vector<std::vector<int>> solution::combinationSum(std::vector<int> &candidates, int target) {
    if (candidates.empty() || target < 1) return {};
    std::sort(candidates.begin(), candidates.end());
    assert(candidates[0] > 0);
    return combinationSum2(candidates, 0, target);
}

std::vector<std::vector<int>> solution::combinationSum2(const std::vector<int> &candidates, int pos, int target) {
    if (pos >= candidates.size()) return {};
    int first = candidates[pos];
    std::vector<std::vector<int>> result;
    int count = target / first;
    while (count >= 0) {
        int rem = target - first * count;
        if (0 < rem && rem < first) {
            --count;
            continue;
        }

        std::vector<int> origin(count, first);
        if (rem == 0) {
            result.push_back(origin);
        } else if (rem > first) {
            std::vector<std::vector<int>> data = combinationSum2(candidates, pos + 1, rem);
            for (auto d : data) {
                std::vector<int> tmp(origin.size() + d.size(), 0);
                std::copy(origin.begin(), origin.end(), tmp.begin());
                std::copy(d.begin(), d.end(), tmp.begin() + origin.size());
                result.push_back(tmp);
            }
        }
        --count;
    }
    return result;
}
