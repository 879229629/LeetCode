#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<int> nums = {1, 1, 1, 2, 2, 3};
    std::cout << "s: " << s.removeDuplicates(nums) << std::endl;
}