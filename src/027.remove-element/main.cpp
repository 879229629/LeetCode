#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<int> nums = {1, 4, 6, 8, 8};

    int ret = s.removeElement(nums, 8);
    std::cout << "ret: " << ret << std::endl;
}