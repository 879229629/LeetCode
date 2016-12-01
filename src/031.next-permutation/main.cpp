#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<int> nums = {1, 2};

    std::for_each(nums.begin(), nums.end(), [](int c) { std::cout << c << ", "; });
    std::cout << std::endl;

    s.nextPermutation(nums);

    std::for_each(nums.begin(), nums.end(), [](int c) { std::cout << c << ", "; });
    std::cout << std::endl;
}