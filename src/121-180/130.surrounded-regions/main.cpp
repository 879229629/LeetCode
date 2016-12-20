#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<std::vector<char>> boards = {
            {'O', 'X', 'X', 'O', 'X'},
            {'X', 'O', 'O', 'X', 'O'},
            {'X', 'O', 'X', 'O', 'X'},
            {'O', 'X', 'O', 'O', 'O'},
            {'X', 'X', 'O', 'X', 'O'}
    };
    s.solve(boards);
    for (int i = 0; i < boards.size(); ++i) {
        for (int j = 0; j < boards[i].size(); ++j) {
            std::cout << boards[i][j] << " ";
        }
        std::cout << std::endl;
    }
}