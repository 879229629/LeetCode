#include "solution.h"

#include <iostream>
#include <vector>

bool solution::wordBreak(std::string s, std::unordered_set<std::string> &wordDict) {
    if (s.empty()) return true;
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
    return r[m - 1];
}
