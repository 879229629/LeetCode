#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<int> nums = {1, 2};
    for (int i = 0; i < nums.size(); ++i) {
        std::cout << nums[i] << "  ";
    }
    std::cout << std::endl;
    s.rotate(nums, 0);
    for (int i = 0; i < nums.size(); ++i) {
        std::cout << nums[i] << "  ";
    }
    std::cout << std::endl;
}