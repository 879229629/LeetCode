#include "solution.h"

#include <unordered_map>
#include <iostream>
#include <vector>

std::string solution::minWindow(std::string s, std::string t) {
    if (s.empty() || t.empty()) return "";
    std::vector<int> base(128, 0);
    for (int j = 0; j < t.size(); ++j) ++base[t[j]];
    int left = 0;
    int min = INT_MAX;
    int requie = t.length();

    int i = 0;
    int from = 0;
    while (i <= s.size() && from < s.size()) {
        if (requie) {
            if (i == s.size()) break;
            --base[s[i]];
            if (base[s[i]] >= 0) --requie;
            ++i;
        } else {
            int l = i - from;
            if (l < min) {
                left = from;
                min = l;
            }
            ++base[s[from]];
            if (base[s[from]] > 0) ++requie;
            ++from;
        }
    }
    return min == INT_MAX ? "" : s.substr(left, min);
}
