#include <iostream>
#include <vector>

#include "solution.h"

int main(int argc, char *argv[]) {
    std::vector<std::vector<int>> nums = {{0,0},
                                          {1,0}};

    solution s;
    int ret = s.uniquePathsWithObstacles(nums);
    std::cout << "ret: " << ret << std::endl;
}