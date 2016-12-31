#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<int> nums = {0, 1, 2, 4, 5, 7};
    auto res = s.summaryRanges(nums);
    for (int i = 0; i < res.size(); ++i) {
        std::cout << res[i] << "  ";
    }
}