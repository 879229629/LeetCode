#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<int> nums = {5, 9, 8, 3, 15};
    int max = s.maximumGap(nums);

    std::cout << "s: " << max << std::endl;
}