#include "solution.h"

int solution::removeDuplicates(std::vector<int> &nums) {
    int length = nums.size();
    if (length < 2) return length;

    int len = 1;
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] != nums[i - 1]) nums[len++] = nums[i];
    }
    return len;
}
