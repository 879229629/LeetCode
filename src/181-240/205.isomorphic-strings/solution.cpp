#include "solution.h"

#include <map>

bool solution::isIsomorphic(std::string s, std::string t) {
    int a[256] = {0};
    int b[256] = {0};

    for (int i = 0; i < s.length(); ++i) {
        if (a[s[i]] != b[t[i]]) return false;
        a[s[i]] = i + 1;
        b[t[i]] = i + 1;
    }
    return true;
}
