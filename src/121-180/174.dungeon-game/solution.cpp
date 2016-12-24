#include "solution.h"
#include <iostream>

int solution::calculateMinimumHP(std::vector<std::vector<int>> &dungeon) {
    if (dungeon.empty()) return 1;
    int m = dungeon.size();
    int n = dungeon[0].size();

    std::vector<int> nums(n + 1, INT_MAX);
    nums[n-1] = 1;
    for (int i = m-1; i >= 0; --i) {
        for (int j = n-1; j >= 0; --j) {
            nums[j] = std::max(1, std::min(nums[j], nums[j + 1]) - dungeon[i][j]);
        }
    }
    return nums[0];
}
