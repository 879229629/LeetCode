#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<int> nums = s.grayCode(0);
    std::cout << "=============" << std::endl;
    for (int i = 0; i < nums.size(); ++i) {
        std::cout << nums[i] << std::endl;
    }
}