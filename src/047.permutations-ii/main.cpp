#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    std::vector<int> nums = {1, 1, 2, 3};
    solution s;
    auto result = s.permuteUnique(nums);
    for (int i = 0; i < result.size(); ++i) {
        for (int j = 0; j < result[i].size(); ++j) {
            std::cout << result[i][j] << ", ";
        }
        std::cout << std::endl;
    }
}