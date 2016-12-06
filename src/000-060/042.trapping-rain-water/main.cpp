#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<int> nums = {4,2,3};
    std::cout << "size: " << s.trap(nums) << std::endl;
}