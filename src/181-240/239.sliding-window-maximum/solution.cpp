#include "solution.h"

#include <iostream>
#include <deque>

std::vector<int> solution::maxSlidingWindow(std::vector<int> &nums, int k) {
    std::vector<int> res;
    std::deque<int> d;
    for (int i = 0; i < nums.size(); ++i) {
        if (!d.empty() && d.front() == i - k) d.pop_front();
        while (!d.empty() && nums[d.back()] < nums[i]) {
            d.pop_back();
        }
        d.push_back(i);
        if (i >= k - 1) {
            res.push_back(nums[d.front()]);
        }
    }
    return res;
}
