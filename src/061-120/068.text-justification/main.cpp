#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<std::string> words = {"Here", "is", "an", "example", "of", "text", "justification."};
    std::vector<std::string> result = s.fullJustify(words, 16);
    for (int i = 0; i < result.size(); ++i) {
        std::cout << "[" << result[i] << "]" << std::endl;
    }
}