#include "solution.h"

bool solution::search(std::vector<int> &nums, int target) {
    int i = 0;
    int j = nums.size() - 1;

    while (i <= j) {
        int m = i + (j - i) / 2;
        if (nums[m] == target) return true;
        if (nums[m] == nums[i] && nums[m] == nums[j]) {
            ++i;
            --j;
        } else if (nums[i] <= nums[m]) {
            if (nums[i] <= target && target < nums[m]) j = m - 1;
            else i = m + 1;
        } else {
            if (nums[m] < target && target <= nums[j]) i = m + 1;
            else j = m - 1;
        }
    }
    return false;
}
