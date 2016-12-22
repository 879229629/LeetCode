#include "solution.h"
#include <iostream>

void solution::reverseWords(std::string &s) {
    int k = 0;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == ' ') {
            ++i;
            if (k >= 1 && s[k - 1] != ' ') s[k++] = ' ';
        } else {
            s[k++] = s[i];
            ++i;
        }
    }
    if (k > 0 && s[k - 1] == ' ') --k;
    s.erase(k);

    std::reverse(s.begin(), s.end());

    int begin = 0;
    while (begin < s.length()) {
        int pos = begin;
        while (pos < s.length() && s[pos] != ' ') ++pos;
        std::reverse(s.begin() + begin, s.begin() + pos);
        begin = pos+1;
    }
}
