#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    std::vector<int> nums = {0};
    solution s;
    bool success = s.canJump(nums);

    std::cout << "success: " << success << std::endl;
}