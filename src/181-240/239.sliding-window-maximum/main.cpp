#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    std::vector<int> res = s.maxSlidingWindow(nums, 3);
    for (int i = 0; i < res.size(); ++i) {
        std::cout << res[i] << "  ";
    }
}