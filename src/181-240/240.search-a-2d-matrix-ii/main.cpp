#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<std::vector<int>> nums = {
            {1,4},
            {2,5}
    };
    std::cout << "s: " << s.searchMatrix(nums, 2) << std::endl;
}