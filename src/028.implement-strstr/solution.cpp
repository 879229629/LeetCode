#include "solution.h"

int solution::strStr(std::string haystack, std::string needle) {
    int length1 = haystack.size();
    int length2 = needle.size();
    if (needle.empty()) return 0;

    for (int i = 0; i < length1 - length2 + 1; ++i) {
        int j = 0;
        for (; j < length2; ++j) {
            if (haystack[i + j] != needle[j]) break;
        }
        if (j == length2) return i;
    }
    return -1;
}
