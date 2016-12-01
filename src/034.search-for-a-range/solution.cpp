#include "solution.h"

std::vector<int> solution::searchRange(std::vector<int> &nums, int target) {
    int l = 0;
    int r = nums.size() - 1;

    int found = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (nums[mid] == target) {
            found = mid;
        }
        if (nums[mid] < target) l = mid + 1;
        else r = mid - 1;
    }

    int first = found;
    int second = found;

    while (first > 0 && nums[first - 1] == nums[first]) --first;

    while (second < nums.size() - 1 && nums[second + 1] == nums[second]) ++second;

    return {first, second};
}
