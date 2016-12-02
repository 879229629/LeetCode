#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    std::vector<std::string> str = {"..4...63.",
                                    ".........",
                                    "5......9.",
                                    "...56....",
                                    "4.3.....1",
                                    "...7.....",
                                    "...5.....",
                                    ".........",
                                    "........."};
    std::vector<std::vector<char>> input;
    for (int i = 0; i < str.size(); ++i) {
        std::vector<char> data(str[i].begin(), str[i].end());
        input.push_back(data);
    }

    solution s;
    std::cout << "s: " << s.isValidSudoku(input) << std::endl;
}