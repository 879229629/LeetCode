#include "solution.h"

#include <map>

bool solution::containsNearbyDuplicate(std::vector<int> &nums, int k) {
    std::map<int, int> mp;
    for (int i = 0; i < nums.size(); ++i) {
        if (mp.find(nums[i]) != mp.end() && i - mp[nums[i]] <= k) return true;
        mp[nums[i]] = i;
    }
    return false;
}
