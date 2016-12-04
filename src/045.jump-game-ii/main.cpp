#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<int> nums = {5, 6, 4, 4, 6, 9, 4, 4, 7, 4, 4, 8, 2, 6, 8, 1, 5, 9, 6, 5, 2, 7, 9, 7, 9, 6, 9, 4, 1, 6,
                             8, 8, 4, 4, 2, 0, 3, 8, 5};

    std::for_each(nums.begin(), nums.end(), [](int a) { std::cout << a << ","; });
    std::cout << std::endl;

    int step = s.jump(nums);
    std::cout << "step: " << step << std::endl;
}