#include "solution.h"

#include <cstdlib>
#include <iostream>

int solution::maxProduct(std::vector<int> &nums) {
    int max = INT_MIN;
    int left = 1;
    int right = 1;
    for (int i = 0; i < nums.size(); ++i) {
        left *= nums[i];
        right *= nums[nums.size() - 1 - i];
        max = std::max(max, std::max(left, right));
        left = left == 0 ? 1 : left;
        right = right == 0 ? 1 : right;
    }
    return max;
}
