#include "solution.h"
#include <iostream>

int solution::minSubArrayLen(int s, std::vector<int> &nums) {
    if (nums.empty() || s == 0) return 0;
    int min = INT_MAX;
    int i = 0;
    int j = 0;
    int n = nums.size();

    int sum = 0;
    while (i < n) {
        while (j < n && sum < s) {
            sum += nums[j];
            ++j;
        }
        if (j == n && sum < s) break;
        if (sum >= s) min = std::min(min, j - i);
        sum -= nums[i++];
    }
    return min == INT_MAX ? 0 : min;
}
