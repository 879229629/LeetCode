#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<int> nums = {3, 3, 1};
    int min = s.findMin(nums);
    std::cout << "s: " << min << std::endl;
}