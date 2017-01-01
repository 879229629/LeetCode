#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<int> nums = {7, 2, 4};
    std::vector<int> res = s.maxSlidingWindow(nums, 2);
    for (int i = 0; i < res.size(); ++i) {
        std::cout << res[i] << "  ";
    }
}