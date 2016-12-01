#include "solution.h"

#include <unordered_map>

std::vector<int> solution::findSubstring(std::string s, std::vector<std::string> &words) {
    int length = s.length();
    int len = words.size();
    int wordLen = 0;
    if (len > 0) wordLen = words[0].length();

    std::vector<int> result;
    int i = 0;
    while (i < length - wordLen * len + 1) {
        bool matchSuccess = isMatch(s.substr(i, wordLen * len), words, wordLen);
        if (matchSuccess) {
            result.push_back(i);
        }
        ++i;
    }
    return result;
}

bool solution::isMatch(std::string str, const std::vector<std::string> &words, int len) {
    std::unordered_map<std::string, int> base;
    for (auto word:words) {
        base[word] += 1;
    }
    int i = 0;
    for (i = 0; i < str.length();) {
        std::string s = str.substr(i, len);
        if (base[s] == 0) {
            return false;
        } else {
            base[s] -= 1;
            i += len;
        }
    }
    return i == str.length();
}
