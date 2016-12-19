#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::string s1 = "hit";
    std::string s2 = "cog";
    std::unordered_set<std::string> words = {"hot", "dot", "dog", "lot", "log"};
    std::vector<std::vector<std::string>> result = s.findLadders(s1, s2, words);
    for (int i = 0; i < result.size(); ++i) {
        for (int j = 0; j < result[i].size(); ++j) {
            std::cout << result[i][j] << "  ";
        }
        std::cout << std::endl;
    }
}