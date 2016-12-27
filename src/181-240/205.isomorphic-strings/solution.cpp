#include "solution.h"

#include <map>

bool solution::isIsomorphic(std::string s, std::string t) {
    std::map<char, char> mps;
    std::map<char, char> mpt;
    if (s.length() != t.length()) return false;

    for (int i = 0; i < s.length(); ++i) {
        if (mps.find(s[i]) == mps.end()) {
            mps[s[i]] = t[i];
        } else if (mps[s[i]] != t[i]) {
            return false;
        }

        if (mpt.find(t[i]) == mpt.end()) {
            mpt[t[i]] = s[i];
        } else if (mpt[t[i]] != s[i]) {
            return false;
        }
    }
    return true;
}
