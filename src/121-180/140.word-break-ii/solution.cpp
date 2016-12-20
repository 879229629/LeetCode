#include "solution.h"

std::vector<std::string> solution::wordBreak(std::string s, std::unordered_set<std::string> &wordDict) {
    if (s.empty()) return {};
    int m = s.size();
    std::vector<bool> r(m, false);
    for (int j = 0; j < m; ++j) {
        for (int i = j; i >= 0; --i) {
            if (i == 0 || r[i - 1]) {
                std::string first = s.substr(i, j - i + 1);
                if (wordDict.find(first) != wordDict.end()) {
                    r[j] = true;
                    break;
                }
            }
        }
    }
    if (!r[m - 1]) return {};
    std::vector<std::string> result;
    help(result, s, 0, "", r, wordDict);
    return result;
}


void solution::help(
        std::vector<std::string> &result,
        const std::string &s,
        int pos,
        std::string word,
        const std::vector<bool> &r,
        const std::unordered_set<std::string> &wordDict) {
    if (pos == s.length()) result.push_back(word);
    for (int i = pos; i < s.length(); ++i) {
        if (r[i]) {
            std::string second = s.substr(pos, i - pos + 1);
            if (wordDict.find(second) == wordDict.end()) continue;
            std::string tmp;
            if (word.empty()) {
                tmp = second;
            } else {
                tmp = word + " " + second;
            }
            help(result, s, i + 1, tmp, r, wordDict);
        }
    }
}