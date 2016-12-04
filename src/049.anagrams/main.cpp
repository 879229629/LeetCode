#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    std::vector<std::string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    solution s;
    auto result = s.groupAnagrams(strs);
    for (int i = 0; i < result.size(); ++i) {
        for (int j = 0; j < result[i].size(); ++j) {
            std::cout << result[i][j] << ", ";
        }
        std::cout << std::endl;
    }
}