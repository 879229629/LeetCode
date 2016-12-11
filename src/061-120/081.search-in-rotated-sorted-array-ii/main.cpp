#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<int> nums = {4, 5, 6, 7, 1, 2, 2, 3, 3, 4, 4, 4};
    std::cout << "s: " << s.search(nums, 4) << std::endl;
}