#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    std::cout << "s: " << s.findKthLargest(nums, 3) << std::endl;
}