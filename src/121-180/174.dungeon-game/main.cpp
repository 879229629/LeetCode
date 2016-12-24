#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<std::vector<int>> nums = {
            {-2, -3,  3},
            {-5, -10, 1},
            {10, 30,  -5}
    };
    int c = s.calculateMinimumHP(nums);

    std::cout << "s: " << c << std::endl;
}