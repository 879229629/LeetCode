#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<std::vector<char>> nums;
    int res = s.numIslands(nums);
    std::cout << "s: " << res << std::endl;
}