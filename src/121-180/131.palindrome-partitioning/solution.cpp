#include "solution.h"

#include <iostream>

std::vector<std::vector<std::string>> solution::partition(std::string s) {
    std::vector<std::vector<std::string>> result;
    std::vector<std::string> words;
    helper(result, words, s, 0);
    return result;
}

void solution::helper(std::vector<std::vector<std::string>> &result,
                      std::vector<std::string> &words,
                      const std::string &s,
                      int pos) {
    if (pos == s.length()) {
        result.push_back(words);
    }
    for (int i = pos; i < s.length(); ++i) {
        std::string first = s.substr(pos, i - pos + 1);
        if (!isPalindrome(first)) continue;
        words.push_back(first);
        helper(result, words, s, i + 1);
        words.pop_back();
    }
}

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