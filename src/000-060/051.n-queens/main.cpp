#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    auto result = s.solveNQueens(8);

    std::cout << "result:" << std::endl;
    for (int i = 0; i < result.size(); ++i) {
        for (int j = 0; j < result[i].size(); ++j) {
            std::cout << result[i][j] << std::endl;
        }
        std::cout << std::endl;
    }

    std::cout << result.size() << std::endl;
}