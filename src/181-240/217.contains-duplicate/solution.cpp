#include "solution.h"

#include <set>

bool solution::containsDuplicate(std::vector<int> &nums) {
    std::set<int> s;
    for (int i = 0; i < nums.size(); ++i) {
        if (s.find(nums[i]) != s.end()) return true;
        s.insert(nums[i]);
    }
    return false;
}
