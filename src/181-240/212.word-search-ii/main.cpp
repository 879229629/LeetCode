#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<std::vector<char>> board = {
            {'o', 'a', 'a', 'n'},
            {'e', 't', 'a', 'e'},
            {'i', 'h', 'k', 'r'},
            {'i', 'f', 'l', 'v'}
    };
    std::vector<std::string> words = {"oath", "pea", "eat", "rain"};
    std::vector<std::string> res = s.findWords(board, words);
    for (int i = 0; i < res.size(); ++i) {
        std::cout << res[i] << std::endl;
    }
}