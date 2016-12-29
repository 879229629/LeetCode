#include "solution.h"

#include <set>

bool solution::containsDuplicate(std::vector<int> &nums) {
    return nums.size() > std::set<int>(nums.begin(), nums.end()).size();
}
