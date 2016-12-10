#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<std::vector<int>> nums = {
            {5},
            {2},
            {0},
            {3},
            {6},
            {7},
            {2}
    };
    s.setZeroes(nums);
    for (int i = 0; i < nums.size(); ++i) {
        for (int j = 0; j < nums[i].size(); ++j) {
            std::cout << nums[i][j] << "  ";
        }
        std::cout << std::endl;
    }
}