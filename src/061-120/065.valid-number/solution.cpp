#include "solution.h"
#include <iostream>

bool solution::isNumber(std::string s) {
    int len = s.size();
    int i = 0;
    for (; i < len && s[i] == ' '; ++i);

    if (i < len && (s[i] == '+' || s[i] == '-')) ++i;

    int n_nm = 0;
    int n_pt = 0;
    for (; i < len && (('0' <= s[i] && s[i] <= '9') || s[i] == '.'); ++i) {
        if (s[i] == '.') ++n_pt;
        else ++n_nm;
    }
    if (n_pt > 1 || n_nm < 1) return false;

    if (s[i] == 'e') {
        ++i;
        if (i < len && (s[i] == '+' || s[i] == '-')) ++i;
        int n_nm = 0;
        for (; i < len && '0' <= s[i] && s[i] <= '9'; ++n_nm, ++i);
        if (n_nm < 1) return false;
    }
    for (; i < len && s[i] == ' '; ++i);
    return i == len;
}
