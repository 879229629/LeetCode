#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<std::vector<int>> nums = {
            {1,  3,  5,  7},
            {10, 11, 16, 20},
            {23, 30, 34, 50}
    };

    std::cout << "s: " << s.searchMatrix(nums, 23) << std::endl;
}