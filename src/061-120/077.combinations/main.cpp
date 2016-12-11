#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<std::vector<int>> nums = s.combine(5, 3);
    for (int i = 0; i < nums.size(); ++i) {
        for (int j = 0; j < nums[i].size(); ++j) {
            std::cout << nums[i][j] << "  ";
        }
        std::cout << std::endl;
    }
}