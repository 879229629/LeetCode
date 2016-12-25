#include "solution.h"

#include <map>
#include <iostream>

std::vector<std::string> solution::findRepeatedDnaSequences(std::string s) {
    if (s.length() < 11) return {};
    std::vector<std::string> res;
    std::map<std::string, int> words;
    int i = 0;
    while (i < s.length() - 9) {
        std::string str = s.substr(i, 10);
        ++words[str];
        if (words[str] == 2) {
            res.push_back(str);
        }
        ++i;
    }
    return res;
}
