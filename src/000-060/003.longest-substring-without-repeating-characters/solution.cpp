#include "solution.h"

#include <cmath>

#include <iostream>
#include <unordered_map>

int solution::lengthOfLongestSubstring(std::string s) {
    int last[255];
    memset(last, -1, sizeof last);

    int maxLen(0);
    int left(0);
    for (auto i = 0; i < s.size(); ++i) {
        if (last[s[i]] >= left) {
            left = last[s[i]] + 1;
        }
        last[s[i]] = i;
        maxLen = std::max(maxLen, i - left + 1);
    }
    return maxLen;
}
