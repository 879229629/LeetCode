#include "solution.h"

int solution::removeDuplicates(std::vector<int> &nums) {
    int len = 0;
    for (int i = 0; i < nums.size();) {
        nums[len] = nums[i];
        ++len;
        ++i;
        while (nums[i] == nums[i - 1] && i < nums.size()) {
            ++i;
        }
    }
    return len;
}
