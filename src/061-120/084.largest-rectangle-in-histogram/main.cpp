#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    std::vector<int> nums = {1};
    solution s;
    int max = s.largestRectangleArea(nums);
    std::cout << "s: " << max << std::endl;
}