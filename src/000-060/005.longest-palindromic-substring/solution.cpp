#include "solution.h"

#include <string>

std::string solution::longestPalindrome(std::string s) {
    if (s.empty()) {
        return "";
    }
    size_t length = s.size();
    if (length == 1) {
        return s;
    }
    size_t min_start = 0;
    size_t max_len = 1;

    for (size_t i = 0; i < length;) {
        if (length - i <= max_len / 2) break;
        size_t j = i;
        size_t k = i;
        // k: s[i] 连续最后一次出现的位置
        while (k < length - 1 && s[k] == s[k + 1]) {
            ++k;
        }
        i = k + 1;

        while (j >= 1 && k < length - 1 && s[j - 1] == s[k + 1]) {
            --j;
            ++k;
        }

        size_t newLen = k - j + 1;
        if (newLen > max_len) {
            max_len = newLen;
            min_start = j;
        }
    }

    return s.substr(min_start, max_len);
}
