#include "solution.h"

#include <iostream>

/*
 *     std::vector<int> nums = {4, 5, 6, 7, 1, 2, 3};
    int target = 7;
 */
int solution::search(std::vector<int> &nums, int target) {
    int i = 0;
    int j = nums.size() - 1;
    while (i <= j) {
        if (nums[i] == target) return i;
        if (nums[j] == target) return j;
        int mid = i + (j - i) / 2;
        if (nums[mid] == target) return mid;
        if (target < nums[mid]) {
            if (target > nums[i]) {
                j = mid - 1;
            } else {
                if (nums[mid] < nums[j]) {
                    j = mid - 1;
                } else {
                    i = mid + 1;
                }
            }
        } else {
            if (target > nums[i]) {
                if (nums[mid] > nums[i]) {
                    i = mid + 1;
                } else {
                    j = mid - 1;
                }
            } else {
                i = mid + 1;
            }
        }
    }
    return -1;
}
