#include "solution.h"

#include <iostream>

int solution::search(std::vector<int> &nums, int target) {
    int i = 0;
    int j = nums.size() - 1;
    while (i <= j) {
        int mid = i + (j - i) / 2;
        if (nums[mid] == target) return mid;
        if (nums[i] <= nums[mid]) {
            if (nums[i] <= target && target < nums[mid]) j = mid - 1;
            else i = mid + 1;
        } else {
            if (nums[mid] < target && target <= nums[j]) i = mid + 1;
            else j = mid - 1;
        }
    }
    return -1;
}
