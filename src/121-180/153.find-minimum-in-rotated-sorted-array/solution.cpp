#include "solution.h"

int solution::findMin(std::vector<int> &nums) {
    if (nums.empty()) return 0;
    int i = 0;
    int j = nums.size() - 1;
    while (i <= j) {
        int mid = i + (j - i) / 2;
        if (mid == i) break;
        if (nums[mid] > nums[i]) {
            if (nums[i] > nums[j]) i = mid + 1;
            else j = mid;
        } else {
            if (nums[mid] < nums[j]) j = mid;
            else i = mid + 1;
        }
    }
    return std::min(nums[i], nums[j]);
}
