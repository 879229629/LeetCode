#include "solution.h"


void solution::moveZeroes(std::vector<int> &nums) {
    int pos = 0;
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] != 0) {
            nums[pos++] = nums[i];
        }
    }
    for (; pos < nums.size(); ++pos) {
        nums[pos] = 0;
    }
    return;
}
