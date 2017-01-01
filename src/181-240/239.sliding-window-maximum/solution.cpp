#include "solution.h"

#include <map>
#include <iostream>

std::vector<int> solution::maxSlidingWindow(std::vector<int> &nums, int k) {
    if (nums.empty()) return {};
    std::vector<int> res(nums.size() - k + 1);
    std::map<int, int> mp;
    for (int i = 0; i < k; ++i) {
        ++mp[nums[i]];
    }
    for (int i = 0; i < nums.size(); ++i) {
        res[i] = mp.rbegin()->first;
        if (i == res.size() - 1) break;
        if (mp[nums[i]] == 1) {
            mp.erase(nums[i]);
        } else {
            --mp[nums[i]];
        }
        ++mp[nums[k + i]];
    }
    return res;
}
