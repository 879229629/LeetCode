#include "solution.h"

#include <iostream>

int solution::trap(std::vector<int> &height) {
    int length = height.size();
    int sum = 0;
    int h = 0;

    int l = 0;
    int r = length - 1;

    while (l < r) {
        if (height[l] < height[r]) {
            h = std::max(height[l], h);
            sum += h - height[l];
            ++l;
        } else {
            h = std::max(height[r], h);
            sum += h - height[r];
            --r;
        }
    }
    return sum;
}
