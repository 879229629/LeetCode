#include "solution.h"
#include <functional>

std::vector<std::string> solution::letterCombinations(std::string digits) {
    std::vector<std::string> tb = {"",
                                   "",
                                   "abc",
                                   "def",
                                   "ghi",
                                   "jkl",
                                   "mno",
                                   "pqrs",
                                   "tuv",
                                   "wxyz"};
    std::vector<std::string> result = {};
    if (digits.empty()) return result;

    std::string first = tb[digits[0] - 48];

    for (int i = 0; i < first.length(); ++i) {
        std::string firstElement = std::string(1,first[i]);
        if (digits.size() == 1) {
            result.push_back(firstElement);
        } else {
            std::vector<std::string> second = letterCombinations(digits.substr(1));
            for (int j = 0; j < second.size(); ++j) {
                std::string tmp = firstElement + second[j];
                result.push_back(tmp);
            }
        }
    }
    return result;
}


