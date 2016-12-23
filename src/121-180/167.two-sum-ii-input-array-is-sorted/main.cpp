#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<int> nums = {5, 25, 75};
    std::vector<int> res = s.twoSum(nums, 100);
    for (int i = 0; i < res.size(); ++i) {
        std::cout << res[i] << " ";
    }
}