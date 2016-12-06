#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    std::vector<std::vector<int>> nums = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
    };
    solution s;
    s.rotate(nums);
    for (int i = 0; i < nums.size(); ++i) {
        for (int j = 0; j < nums[i].size(); ++j) {
            std::cout << nums[i][j] << ", ";
        }
        std::cout << std::endl;
    }
}