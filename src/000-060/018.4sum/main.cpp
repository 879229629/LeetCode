#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<int> input = {-3, -2, -1, 0, 0, 1, 2, 3};
    int target = 0;
    auto result = s.fourSum(input, target);
    for (int i = 0; i < result.size(); ++i) {
        for (int j = 0; j < result[i].size(); ++j) {
            std::cout << result[i][j] << ", ";
        }
        std::cout << std::endl;
    }
    std::cout << "result: " << result.size() << std::endl;

}