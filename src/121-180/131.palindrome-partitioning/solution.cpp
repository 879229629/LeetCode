#include "solution.h"

#include <iostream>

bool solution::isPalindrome(std::string s) {
    if (s.empty()) return true;
    int i = 0;
    int j = s.length() - 1;
    while (i < j) {
        if (s[i] != s[j]) return false;
        ++i;
        --j;
    }
    return true;
}

std::vector<std::vector<std::string>> solution::partition(std::string s) {
    if (s.empty()) return {};
    std::vector<std::vector<std::string>> result;
    for (int i = 0; i < s.length(); ++i) {
        std::string first = s.substr(0, i + 1);
        std::string second = s.substr(i + 1);
        if (!isPalindrome(first)) continue;
        if (second.empty()) {
            result.push_back({first});
        } else {
            std::vector<std::vector<std::string>> data = partition(second);
            for (auto &d:data) {
                std::vector<std::string> t;
                t.push_back(first);
                std::copy(d.begin(), d.end(), std::back_inserter(t));
                result.push_back(t);
            }
        }
    }
    return result;
}
