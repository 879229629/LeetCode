#include "solution.h"
#include <map>
#include <cstdlib>


bool solution::containsNearbyAlmostDuplicate(std::vector<int> &nums, int k, int t) {
    std::multimap<long, int> mp;
    for (int i = 0; i < nums.size(); ++i) {
        auto it = std::make_pair(nums[i], i);
        mp.insert(it);
    }
    auto p1 = mp.begin();
    while (p1 != mp.end()) {
        auto p2 = p1;
        ++p2;
        while (p2 != mp.end() && p2->first - p1->first <= t) {
            if (std::abs(p1->second - p2->second) <= k) return true;
            ++p2;
        }
        ++p1;
    }
    return false;
}
