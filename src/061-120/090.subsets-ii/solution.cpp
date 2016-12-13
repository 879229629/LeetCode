#include "solution.h"

std::vector<std::vector<int>> solution::subsetsWithDup(std::vector<int> &nums) {
    std::sort(nums.begin(), nums.end());

    std::vector<std::vector<int>> result;
    std::vector<int> res;
    dfs(result, nums, res, 0);
    return result;
}

void solution::dfs(std::vector<std::vector<int>> &result,
                   const std::vector<int> &nums,
                   std::vector<int> res,
                   int from) {
    if (from > nums.size()) return;
    if (res.size() <= nums.size()) result.push_back(res);
    for (int i = from; i < nums.size(); ++i) {
        res.push_back(nums[i]);
        dfs(result, nums, res, i + 1);
        res.pop_back();
        while (i + 1 < nums.size() && nums[i + 1] == nums[i]) ++i;
    }
}

