#include "solution.h"

#include <set>

std::vector<std::vector<int>> solution::permuteUnique(std::vector<int> &nums) {
    if (nums.size() <= 1) return {nums};

    std::vector<std::vector<int>> result;

    std::set<int> unique;
    for (int i = 0; i < nums.size(); ++i) {
        if (unique.find(nums[i]) != unique.end())continue;

        unique.insert(nums[i]);

        std::vector<int> tmp;
        for (int j = 0; j < nums.size(); ++j) {
            if (j != i) tmp.push_back(nums[j]);
        }
        auto second = permuteUnique(tmp);
        for (auto e:second) {
            tmp.clear();
            tmp.push_back(nums[i]);
            tmp.insert(tmp.end(), e.begin(), e.end());
            result.push_back(tmp);
        }
    }
    return result;
}

