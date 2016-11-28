#include "solution.h"

std::string solution::longestCommonPrefix(std::vector<std::string> &strs) {
    if (strs.empty()) return "";
    if (strs.size() == 1) return strs[0];

    std::string target = strs[0];
    int i = 0;
    for (i = 0; i < target.length(); ++i) {
        for (int j = 1; j < strs.size(); ++j) {
            if (i >= strs[j].length() || strs[j][i] != target[i]) return target.substr(0, i);
        }
    }
    return target.substr(0, i);
}
