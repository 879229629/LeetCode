#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::string word = "leetcode";
    std::unordered_set<std::string> words = {"leet", "code"};
    std::vector<std::string> result = s.wordBreak(word, words);
    for (int i = 0; i < result.size(); ++i) {
        std::cout << result[i] << std::endl;
    }
}