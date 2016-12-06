#include "solution.h"


int solution::removeElement(std::vector<int> &nums, int val) {
    int len = 0;
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] != val) nums[len++] = nums[i];
    }
    return len;
}
