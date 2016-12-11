#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<std::vector<char>> nums = {{'w', 'd'},
                                           {'m', 'l'}};
    std::cout << "s: " << s.exist(nums, "ml") << std::endl;
}