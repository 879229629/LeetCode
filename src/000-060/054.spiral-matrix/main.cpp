#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<std::vector<int>> nums = {
            {7, 8, 9},{4,0,-1}
    };
    std::vector<int> result = s.spiralOrder(nums);

    for (int i = 0; i < result.size(); ++i) {
        std::cout << result[i] << ", ";
    }
    std::cout << std::endl;
}