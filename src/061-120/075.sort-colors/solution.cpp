#include "solution.h"

void solution::sortColors(std::vector<int> &nums) {
    if (nums.empty()) return;
    int rIndex = -1;
    int wIndex = -1;
    int bIndex = -1;
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] == 0) {
            nums[++bIndex] = 2;
            nums[++wIndex] = 1;
            nums[++rIndex] = 0;
        } else if (nums[i] == 1) {
            nums[++bIndex] = 2;
            nums[++wIndex] = 1;
        } else if (nums[i] == 2) {
            nums[++bIndex] = 2;
        }
    }
    return;
}
