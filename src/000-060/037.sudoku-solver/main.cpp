#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {

    std::vector<std::string> str = {"..4...63.",
                                    ".........",
                                    "5......9.",
                                    "...56....",
                                    "4.3.....1",
                                    "...7.....",
                                    "...6.....",
                                    ".........",
                                    "........."};
    std::vector<std::vector<char>> input;
    for (int i = 0; i < str.size(); ++i) {
        std::vector<char> data(str[i].begin(), str[i].end());
        input.push_back(data);
    }
    solution s;
    s.solveSudoku(input);
    //
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            std::cout << input[i][j] << "  ";
        }
        std::cout << std::endl;
    }
}