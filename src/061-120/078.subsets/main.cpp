#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<int> nums = {1, 2, 3,4};
    std::vector<std::vector<int>> result = s.subsets(nums);
    for (int i = 0; i < result.size(); ++i) {
        std::cout << "begin:";
        for (int j = 0; j < result[i].size(); ++j) {
            std::cout << result[i][j] << "  ";
        }
        std::cout << std::endl;
    }
}