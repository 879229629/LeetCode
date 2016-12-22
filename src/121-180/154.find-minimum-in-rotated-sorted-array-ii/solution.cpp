#include "solution.h"

int solution::findMin(std::vector<int> &nums) {
    int i = 0;
    int j = nums.size() - 1;
    while (i < j) {
        if (nums[i] < nums[j]) return nums[i];
        int mid = i + (j - i) / 2;
        if (mid == i) break;
        if (nums[i] < nums[mid]) i = mid + 1;
        else if (nums[i] == nums[mid]) ++i;
        else {
            if (nums[mid] > nums[j]) i = mid + 1;
            else if (nums[mid] == nums[j]) --j;
            else j = mid;
        }
    }
    return std::min(nums[i], nums[j]);
}
