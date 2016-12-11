#include "solution.h"

#include <unordered_map>
#include <iostream>

std::string solution::minWindow(std::string s, std::string t) {
    if (t.length() > s.length()) return "";
    std::unordered_map<char, int> base;
    for (int i = 0; i < t.size(); ++i) {
        ++base[t[i]];
    }
    int len = s.length();
    int from = 0;
    int i = 0;
    int cout = 0;
    int min = s.size() + 1;
    std::string res;

    while (i < len) {
        if (base.find(s[i]) != base.end()) {
            --base[s[i]];
            if (base[s[i]] >= 0) ++cout;
            if (cout == t.length()) {
                std::cout << from << "," << i << "," << min << std::endl;
                while (base.find(s[from]) == base.end() || base[s[from]] < 0) {
                    if (base.find(s[from]) != base.end()) ++base[s[from]];
                    ++from;
                }
                int l = i - from + 1;
                if (l < min) {
                    min = l;
                    res = s.substr(from, l);
                }
                ++base[s[from]];
                --cout;
                ++from;
            }
        }
        ++i;
    }
    return res;
}
