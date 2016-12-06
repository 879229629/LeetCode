#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;

    std::vector<int> nums = {10,1,2,7,6,1,5};
    std::vector<std::vector<int>> result = s.combinationSum2(nums, 8);
    for (int i = 0; i < result.size(); ++i) {
        for (int j = 0; j < result[i].size(); ++j) {
            std::cout << result[i][j] << ", ";
        }
        std::cout << std::endl;
    }
}