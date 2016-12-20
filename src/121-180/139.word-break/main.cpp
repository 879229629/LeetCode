#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::string word = "leetcode";
    std::unordered_set<std::string> words = {"leet", "code"};
    int valid = s.wordBreak(word, words);
    std::cout << "s: " << valid << std::endl;
}