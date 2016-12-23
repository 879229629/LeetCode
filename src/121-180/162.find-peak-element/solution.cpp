#include "solution.h"

int solution::findPeakElement(std::vector<int> &nums) {
    if (nums.empty()) return 0;
    int pos = 0;
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] >= nums[pos]) pos = i;
        else return pos;
    }
    return pos;
}
