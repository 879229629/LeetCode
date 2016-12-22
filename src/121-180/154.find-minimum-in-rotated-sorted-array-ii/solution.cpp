#include "solution.h"

int solution::findMin(std::vector<int> &nums) {
    int i = 0;
    int j = nums.size() - 1;
    while (i < j) {
        if (nums[i] < nums[j]) return nums[i];
        int mid = i + (j - i) / 2;
        if (nums[j] < nums[mid]) i = mid + 1;
        else if (nums[j] == nums[mid]) {
            ++i;
            --j;
        } else j = mid;
    }
    return nums[i];
}
