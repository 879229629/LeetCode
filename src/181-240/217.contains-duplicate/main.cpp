#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<int> nums = {1, 54, 2, 5};
    std::cout << "s: " << s.containsDuplicate(nums) << std::endl;
}