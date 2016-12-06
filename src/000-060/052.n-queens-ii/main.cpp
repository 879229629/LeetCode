#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    int sum = s.totalNQueens(8);

    std::cout << "sum: " << sum << std::endl;
}