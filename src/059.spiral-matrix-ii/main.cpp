#include <iostream>
#include <iomanip>


#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<std::vector<int>> nums = s.generateMatrix(9);
    for (int i = 0; i < nums.size(); ++i) {
        for (int j = 0; j < nums[i].size(); ++j) {
            std::cout << std::setw(4) << nums[i][j] << " ";
        }
        std::cout << std::endl;
    }
}