#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<int> nums = {1, 2, 3, 1};
    int pos = s.findPeakElement(nums);
    std::cout << "s: " << pos << std::endl;
}