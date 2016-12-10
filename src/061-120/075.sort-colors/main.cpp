#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<int> nums = {1, 2, 0, 2, 1, 1, 1, 0, 0, 0, 1};
    s.sortColors(nums);
    for (int i = 0; i < nums.size(); ++i) {
        std::cout << nums[i] << " ";
    }
}