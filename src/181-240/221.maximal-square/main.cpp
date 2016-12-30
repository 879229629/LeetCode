#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<std::vector<char>> chs = {
            {'1', '0', '1', '0', '0'},
            {'0', '0', '0', '0', '0'},
            {'0', '0', '1', '1', '0'},
            {'0', '0', '1', '1', '0'},
            {'0', '0', '0', '0', '0'}
    };
    std::cout << "s: " << s.maximalSquare(chs) << std::endl;
}