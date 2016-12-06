#include "solution.h"

#include <iostream>

std::vector<std::vector<int>> solution::permute(std::vector<int> &nums) {
    if (nums.size() <= 1) return {nums};

    std::vector<std::vector<int>> result;

    for (int i = 0; i < nums.size(); ++i) {
        std::vector<int> tmp;
        for (int j = 0; j < nums.size(); ++j) {
            if (j != i) tmp.push_back(nums[j]);
        }
        auto second = permute(tmp);
        for (auto e:second) {
            tmp.clear();
            tmp.push_back(nums[i]);
            tmp.insert(tmp.end(), e.begin(), e.end());
            result.push_back(tmp);
        }
    }
    return result;
}
