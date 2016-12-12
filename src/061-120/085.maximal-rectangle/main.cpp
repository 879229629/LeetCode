#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<std::vector<char>> nums = {
            {'1', '1', '1'},
            {'1', '1', '1'}
    };
    int ret = s.maximalRectangle(nums);
    std::cout << "s: " << ret << std::endl;
}

