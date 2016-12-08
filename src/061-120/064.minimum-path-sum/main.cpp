#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    std::vector<std::vector<int>> nums = {{1,2,3},{4,5,6}};
    solution s;
    int sum = s.minPathSum(nums);
    std::cout << "sum: " << sum << std::endl;
}