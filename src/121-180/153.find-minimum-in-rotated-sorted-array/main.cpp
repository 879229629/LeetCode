#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<int> nums = {5, 1, 2, 3, 4};
    int min = s.findMin(nums);
    std::cout << "s: " << min << std::endl;
}