#include "solution.h"

int solution::strStr(std::string haystack, std::string needle) {
    int length1 = haystack.size();
    int length2 = needle.size();
    if (needle.empty()) return 0;
    if (haystack.empty() || length1 < length2) return -1;

    int begin = 0;

    while (begin <= length1 - length2) {
        while (begin < length1 && haystack[begin] != needle[0]) ++begin;
        if (begin > length1 - 1 || length1 - begin < length2) return -1;

        int i = begin + 1;
        int j = 1;
        while (j < length2 && haystack[i] == needle[j]) {
            ++i;
            ++j;
        };

        if (j == length2) return begin;
        ++begin;
    }
    return -1;
}
